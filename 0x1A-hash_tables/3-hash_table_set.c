#include "hash_tables.h"

/**
 * check_for_collision - check for collision in hash table
 * @ht: hash table you want to add or update the key/value to
 * @node: node element to check
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int check_for_collision(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int kfn, index; /*kfn - key from node*/

	kfn = key_index((const unsigned char *)node->key, ht->size);
	for (index = 0; index < ht->size; index++)
		if (index == kfn && ht->array[kfn])
			return (1);

	return (0);
}

/**
 * move_to_top - add the new node at the beginning of the list
 * @ht: hash table you want to add or update the key/value to
 * @node: node element to check
 * @kfn: key from node
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
void move_to_top(hash_table_t *ht, hash_node_t *node, unsigned long int kfn)
{
	hash_node_t *last;

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

	node->next = ht->array[kfn];
	ht->array[kfn] = node;
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key of the data
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	int is_collision;
	unsigned long int kfn; /*kfn = key from node*/

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	kfn = key_index((const unsigned char *)key, ht->size);
	is_collision = check_for_collision(ht, new);
	if (is_collision == 0)
	{
		ht->array[kfn] = new;
	}
	else
	{
		move_to_top(ht, new, kfn);
	}

	return (1);
}
