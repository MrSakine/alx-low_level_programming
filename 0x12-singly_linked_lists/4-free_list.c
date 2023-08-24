/*
 * File: 4-free_list.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: singly linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);

		head = tmp;
	}
}

