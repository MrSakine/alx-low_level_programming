/*
 * File: 3-add_node_end.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of a list_t list.
 * @head: singly linked list
 * @n: constant number
 *
 * Return: singly linked list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (*head);
}
