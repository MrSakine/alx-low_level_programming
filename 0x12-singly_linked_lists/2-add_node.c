/*
 * File: 2-add_node.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: singly linked list
 * @str: constant string
 *
 * Return: singly linked list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;

	*head = new;

	return (new);
}

