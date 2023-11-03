#include "hash_tables.h"

/**
 * is_whitespace_string - checks if a string is only
 * containing whitespaces:
 * @str: string to check
 *
 * Return: 1 if white space string or else 0
 */
int is_whitespace_string(const char *str)
{
	while (*str != '\0')
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
			return (0);
		str++;
	}

	return (1);
}

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
	unsigned long int index;
	hash_node_t *last;

	for (index = 0; index < ht->size; index++)
	{
		if (index == kfn && ht->array[kfn])
		{
			last = ht->array[kfn];
			node->next = last;
			ht->array[kfn] = node;
		}
	}
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

	if (ht == NULL || ht->array == NULL)
		return (0);
	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	if (is_whitespace_string(key))
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
