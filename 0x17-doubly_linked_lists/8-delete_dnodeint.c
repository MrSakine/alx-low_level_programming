#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: pointer to the list of dlistint_t
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *last, *temp;
	unsigned int len = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	last = (*head);
	while (last != NULL && (last->next != NULL) && (len < index))
	{
		last = last->next;
		len++;
	}
	if (last != NULL)
	{
		if (last->next == NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			return (1);
		}
		else
		{
			if (index == 0)
			{
				temp = (*head)->next;
				free(*head);
				temp->prev = NULL;
				*head = temp;
				return (1);
			}
			temp = last->next;
			last->next = temp->next;
			temp->prev = last;
			free(temp);
		}
	}
	return (1);
}
