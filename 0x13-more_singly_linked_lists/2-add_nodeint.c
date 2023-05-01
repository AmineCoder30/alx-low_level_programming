#include "lists.h"

/**
 * add_nodeint - add a new element at the beginning
 * @head: head of a list.
 * @n: n element.
 * Return:return address of the new element.
 * author:amine mohamed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (*head);
}
