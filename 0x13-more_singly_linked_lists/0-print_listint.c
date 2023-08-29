/*
 * File: 0-print_list.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: singly linked list
 *
 * Return: length of element of singly linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
