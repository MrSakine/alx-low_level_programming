/*
 * File: 5-free_listint2.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: singly linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}

