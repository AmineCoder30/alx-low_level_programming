#include "lists.h"

/**
 * free_list - this function is for to frees a list
 * @head: this varibales is
 * the head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
