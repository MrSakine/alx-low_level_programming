#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table you want to add or update the key/value to
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int len = 0, index;
	hash_node_t *last;
	hash_node_t *current;

	if (ht == NULL)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
		if (ht->array[index])
			len++;

	putchar('{');
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			last = ht->array[index];
			current = last;
			printf("\'%s\': \'%s\'", last->key, last->value);
			while (last->next != NULL)
			{
				if (strcmp(current->key, last->next->key) == -1)
					printf(", \'%s\': \'%s\'", last->next->key, last->next->value);
				last = last->next;
			}

			if (len > 1)
				printf(", ");
			len--;
		}
	}
	printf("}\n");
}

