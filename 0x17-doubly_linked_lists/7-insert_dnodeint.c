#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the list of dlistint_t
 * @idx: index of the node
 * @n: number of the new node
 * Return: the address of the node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *last, *new;
	unsigned int len = 0;

	if (h == NULL || *h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	last = (*h);
	if (idx == 0)
	{
		if (last)
			last->prev = new;
		new->next = last;
		*h = new;
		return (new);
	}
	while (len < idx - 1)
	{
		if (last->next == NULL)
		{
			free(new);
			return (NULL);
		}
		last = last->next;
		len++;
	}
	if (last == NULL || last->next == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = last->next;
	last->next->prev = new;
	last->next = new;
	new->prev = last;
	return (new);
}
