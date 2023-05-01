#include "lists.h"

/**
 * pop_listint - function to delete the head
 * @head: head of a list.
 * Return: head node's data.
 * author:amine mohamed
 */
int pop_listint(listint_t **head)
{
	int hn;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	hn = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (hn);
}
