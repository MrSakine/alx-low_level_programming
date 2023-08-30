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
	unsigned int len = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	while (*head != NULL)
	{
		if (len == index)
		{
			tmp = (*head)->next;

			if (tmp == NULL)
				return (-1);

			free(*head);
			*head = tmp;

			return (1);
		}

		len++;
	}

	return (-1);
}

