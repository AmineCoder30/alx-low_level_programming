#include "lists.h"

/**
 * insert_nodeint_at_index - function to inserts a new node
 * @head: head of a list.
 * @idx: index of the list.
 * @n: integer element.
 * Return: the address of the new node.
 * author:amine mohamed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nw;
	listint_t *h;
	unsigned int j;

	h = *head;

	if (idx != 0)
	{
		for (j = 0; j < idx - 1 && h != NULL; j++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
	}
	else
	{
		nw->next = h->next;
		h->next = nw;
	}

	return (nw);
}
