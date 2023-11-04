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
	unsigned long int kfn; /*kfn - key from node*/
	hash_node_t *last;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	kfn = key_index((const unsigned char *)key, ht->size);
	if (kfn >= ht->size)
		return (NULL);
	last = ht->array[kfn];
	while (last && strcmp(last->key, key) != 0)
		last = last->next;
	if (last == NULL)
		return (NULL);

	return (last->value);
}
