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

	listint_t *previous;

	listint_t *next;

	previous = *head;

	unsigned int j;

	if (index != 0)
	{
		for (j = 0; j < index - 1 && previous != NULL; j++)
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
