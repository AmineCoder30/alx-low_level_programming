#include "lists.h"

/**
 * free_listint -function to frees a linked list
 * @head: head of a list.
 * Return: no return.
 * author:amine mohamed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
