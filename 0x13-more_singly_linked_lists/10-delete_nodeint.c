/*
 * File: 10-delete_nodeint.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list
 * @head: singly linked list
 * @index: node index to look for
 *
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *last;
	unsigned int len = 0;

	last = *head;
	if (last == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(last);
		return (1);
	}

	while (len < (index - 1))
	{
		if (last == NULL || last->next == NULL)
			return (-1);

		last = last->next;
		len++;
	}

	tmp = last->next;
	last->next = tmp->next;
	free(tmp);
	return (1);
}
