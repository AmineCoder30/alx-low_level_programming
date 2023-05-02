#include "lists.h"

/**
 * find_listint_loop - function finds the loop in a linked list.
 * @head: head of a list.
 * Return: the address
 * author :amine mohamed
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *r4;
	listint_t *previous;

	r4 = head;
	previous = head;
	while (head && r4 && r4->next)
	{
		head = head->next;
		r4 = r4->next->next;

		if (head == r4)
		{
			head = previous;
			previous =  r4;
			while (1)
			{
				r4 = previous;
				while (r4->next != head && r4->next != previous)
				{
					r4 = r4->next;
				}
				if (r4->next == head)
					break;

				head = head->next;
			}
			return (r4->next);
		}
	}

	return (NULL);
}
