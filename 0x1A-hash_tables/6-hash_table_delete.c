#include "hash_tables.h"

/**
 * free_hash_node - free hash node element
 * @node: node element to free
 *
 * Return: void
 */
void free_hash_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * free_hash_table - free hash table
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: void
 */
void free_hash_table(hash_table_t *ht)
{
	free(ht->array);
	free(ht);
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *last;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	for (; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			last = ht->array[index];
			while (last != NULL)
			{
				temp = last->next;
				free_hash_node(last);
				last = temp;
			}
		}
	}
	free_hash_table(ht);
}
