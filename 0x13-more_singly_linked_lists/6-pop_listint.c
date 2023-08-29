/*
 * File: 6-pop_listint.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: singly linked list
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;

	return (n);
}

