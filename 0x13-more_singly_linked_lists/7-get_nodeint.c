/*
 * File: 7-get_nodeint.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * a listint_t linked list
 * @head: singly linked list
 * @index: number
 *
 * Return: singly linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (len == index)
		{
			return (head);
		}

		head = head->next;
		len++;
	}

	return (NULL);
}

