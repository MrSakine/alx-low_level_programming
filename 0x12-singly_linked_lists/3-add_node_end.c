/*
 * File: 3-add_node_end.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: singly linked list
 * @str: constant string
 *
 * Return: singly linked list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	int length;
	char *dup;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; dup[length];)
		length++;

	new->str = dup;
	new->len = length;
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

	return (last);
}

