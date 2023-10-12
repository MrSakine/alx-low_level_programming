#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: pointer to the list of dlistint_t
 * Return: sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

