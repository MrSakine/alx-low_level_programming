#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to add or update the key/value to
 * @key: key of the data
 *
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int kfn, index; /*kfn - key from node*/

	if (ht == NULL || *(ht->array) == NULL)
		return (NULL);

	kfn = key_index((const unsigned char *)key, ht->size);
	for (index = 0; index < ht->size; index++)
		if (index == kfn && ht->array[index])
			return (ht->array[index]->value);

	return (NULL);
}
