/*
 * File: 8-sum_listint.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * sum_listint - returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: singly linked list
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

