/*
 * File: 9-insert_nodeint.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: singly linked list
 * @idx: node index to look for
 * @n: value of the new node
 *
 * Return: singly linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *last;
	unsigned int len = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	last = *head;

	if (idx == 0)
	{
		new->next = last;
		*head = new;
		return (new);
	}

	while (len < (idx - 1))
	{
		if (last == NULL || last->next == NULL)
			return (NULL);

		last = last->next;
		len++;
	}

	new->next = last->next;
	last->next = new;
	return (new);
}
