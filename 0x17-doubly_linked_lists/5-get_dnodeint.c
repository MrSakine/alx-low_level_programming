#include "lists.h"

/**
 * get_dnodeint_at_index - adds a new node at the end of a dlistint_t list
 * @head: pointer to the list of dlistint_t
 * @index: index of the node
 * Return: the address of the node, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *next;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	next = head;

	if (index == 0)
	{
		return (next);
	}

	while (len < index - 1)
	{
		if (next == NULL || next->next == NULL)
			return (NULL);
		next = next->next;
		len++;
	}

	return (next->next);
}

