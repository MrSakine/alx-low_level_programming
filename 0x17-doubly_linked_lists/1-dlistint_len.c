#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the list of dlistint_t
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t total;

	if (h == NULL)
		return (0);

	total = 0;
	while (h != NULL)
	{
		total++;
		h = h->next;
	}

	return (total);
}

