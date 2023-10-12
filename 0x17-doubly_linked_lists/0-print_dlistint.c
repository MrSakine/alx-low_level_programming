#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the list of dlistint_t
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t total;
	const dlistint_t *current;

	if (h == NULL)
		return (0);

	current = h;
	total = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		total++;
		current = current->next;
	}

	return (total);
}

