#include "hash_tables.h"

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
	(void)ht;
	(void)key;
	(void)value;
	return (0);
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
	(void)ht;
	(void)key;
	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	(void)ht;
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	(void)ht;
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	(void)ht;
}
