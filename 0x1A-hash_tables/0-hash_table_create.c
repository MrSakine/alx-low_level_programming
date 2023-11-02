#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: a pointer to the newly created hash table
 * or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	hash = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	for (i = 0; i < size; i++)
	{
		hash->array[i] = NULL;
	}

	return (hash);
}

