#include "lists.h"

/**
 * sum_listint - function returns the sum of all the data
 * @head: head of a list.
 * Return: sum of all the data (n).
 * author:amine mohamed
 */
int sum_listint(listint_t *head)
{
	int s_m = 0;

	while (head != NULL)
	{
		s_m += head->n;
		head = head->next;
	}

	return (s_m);
}
