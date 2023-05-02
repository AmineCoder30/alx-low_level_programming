#include "lists.h"

/**
 * delete_nodeint_at_index - function to deletes the node at index.
 * @head: head of a list.
 * @index: varibale =  index of the list where the node is deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 * author : ammine mohamed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *previous;

	listint_t *next;

	previous = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && previous != NULL; i++)
		{
			previous = previous->next;
		}
	}
	if (previous == NULL || (previous->next == NULL && index != 0))
	{
		return (-1);
	}

	next = previous->next;

	if (index != 0)
	{
		previous->next = next->next;
		free(next);
	}
	else
	{
		free(previous);
		*head = next;
	}

	return (1);
}
