#include "lists.h"

/**
 * reverse_listint -function to reverses a linked list.
 * @head: head of a list.
 * Return: pointer to first node.
 * author : amine mohamed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pn;
	listint_t *num;

	pn = NULL;
	num = NULL;

	while (*head != NULL)
	{
		num = (*head)->next;
		(*head)->next = pn;
		pn = *head;
		*head = num;
	}

	*head = pn;
	return (*head);
}
