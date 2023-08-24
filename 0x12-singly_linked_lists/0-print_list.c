/*
 * File: 0-print_list.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linked list
 *
 * Return: length of element of singly linked list.
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		h = h->next;
		len++;
	}

	return (len);
}

