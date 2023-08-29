/*
 * File: 1-listint_len.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked listint_t list.
 * @h: singly linked list
 *
 * Return: length of element of singly linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}

