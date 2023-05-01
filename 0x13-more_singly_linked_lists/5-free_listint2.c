#include "lists.h"

/**
 * free_listint2 - function to frees a linked list
 * @head: head of a list.
 * Return: no return.
 * author:amine mohamed
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
