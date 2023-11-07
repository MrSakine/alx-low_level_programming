#include "hash_tables.h"

int scheck_for_collision(shash_table_t *ht, shash_node_t *node);
void smove_to_top(
	shash_table_t *ht, shash_node_t *node, unsigned long int kfn);
void add_to_array_and_update_hash_table(
	shash_table_t *ht, shash_node_t *node, unsigned long int kfn);
void shash_table_delete(shash_table_t *ht);
void sfree_hash_node(shash_node_t *node);
void sfree_hash_table(shash_table_t *ht);

/**
 * shash_table_create - creates a shash table
 * @size: the size of the hash table
 * Return: a pointer to the newly created shash table
 * or NULL if something went wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash;
	unsigned long int i;

	shash = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (shash == NULL)
		return (NULL);

	shash->size = size;
	shash->array = (shash_node_t **)calloc(size, sizeof(shash_node_t *));
	for (i = 0; i < size; i++)
		shash->array[i] = NULL;
	shash->shead = NULL;
	shash->stail = NULL;

	return (shash);
}

/**
 * shash_table_set - adds an element to the shash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key of the data
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new;
	int is_collision;
	unsigned long int kfn; /*kfn = key from node*/

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	new->sprev = NULL;
	new->snext = NULL;
	kfn = key_index((const unsigned char *)key, ht->size);
	is_collision = scheck_for_collision(ht, new);
	if (is_collision == 0)
		add_to_array_and_update_hash_table(ht, new, kfn);
	else
		smove_to_top(ht, new, kfn);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to add or update the key/value to
 * @key: key of the data
 *
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int kfn; /*kfn - key from node*/
	shash_node_t *last;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	kfn = key_index((const unsigned char *)key, ht->size);
	if (kfn >= ht->size)
		return (NULL);
	last = ht->shead;
	while (last && strcmp(last->key, key) != 0)
		last = last->snext;
	if (last == NULL)
		return (NULL);

	return (last->value);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *last;

	if (ht == NULL)
		return;
	printf("{");
	last = ht->shead;
	while (last != NULL)
	{
		printf("\'%s\': \'%s\'", last->key, last->value);
		last = last->snext;
		if (last)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *last;

	if (ht == NULL)
		return;
	printf("{");
	last = ht->stail;
	while (last != NULL)
	{
		printf("\'%s\': \'%s\'", last->key, last->value);
		last = last->sprev;
		if (last)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *last;
	shash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	last = ht->shead;
	while (last)
	{
		temp = last->snext;
		sfree_hash_node(last);
		last = temp;
	}

	sfree_hash_table(ht);
}

/**
 * scheck_for_collision - check for collision in hash table
 * @ht: hash table you want to add or update the key/value to
 * @node: node element to check
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int scheck_for_collision(shash_table_t *ht, shash_node_t *node)
{
	unsigned long int kfn, index; /*kfn - key from node*/

	kfn = key_index((const unsigned char *)node->key, ht->size);
	for (index = 0; index < ht->size; index++)
		if (index == kfn && ht->array[kfn])
			return (1);

	return (0);
}

/**
 * smove_to_top - add the new node at the beginning of the list
 * @ht: hash table you want to add or update the key/value to
 * @node: node element to check
 * @kfn: key from node
 *
 * Return: void
 */
void smove_to_top(shash_table_t *ht, shash_node_t *node, unsigned long int kfn)
{
	shash_node_t *last;

	last = ht->array[kfn];
	while (last)
	{
		if (strcmp(last->key, node->key) == 0)
		{
			free(last->value);
			last->value = strdup(node->value);
			free(node->key);
			free(node->value);
			free(node);
			return;
		}

		last = last->next;
	}

	if (strcmp(node->key, ht->array[kfn]->key) < 0)
	{
		node->snext = ht->array[kfn];
		ht->array[kfn]->sprev = node;
	}

	ht->array[kfn] = node;
}

/**
 * add_to_array_and_update_hash_table - add the new node into the hash
 * @ht: hash table you want to add or update the key/value to
 * @node: node element to add
 * @kfn: key from node
 *
 * Return: void
 */
void add_to_array_and_update_hash_table(
	shash_table_t *ht, shash_node_t *node, unsigned long int kfn)
{
	shash_node_t *last;

	last = ht->shead;
	if (last == NULL)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(last->key, node->key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		while (last->snext != NULL && strcmp(last->snext->key, node->key) < 0)
			last = last->snext;
		node->sprev = last;
		node->snext = last->snext;
		if (last->snext == NULL)
			ht->stail = node;
		else
			last->snext->sprev = node;
		last->snext = node;
	}

	ht->array[kfn] = node;
}

/**
 * sfree_hash_node - free hash node element
 * @node: node element to free
 *
 * Return: void
 */
void sfree_hash_node(shash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * sfree_hash_table - free hash table
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: void
 */
void sfree_hash_table(shash_table_t *ht)
{
	free(ht->array);
	free(ht);
}
