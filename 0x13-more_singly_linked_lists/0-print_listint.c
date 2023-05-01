#include "lists.h"


/**
 * print_listint -function to prints all the elements of a list.
 * @h: the head of a list.
 * Return:return the number of nodes.
 * author:amine mohamed
 */
size_t print_listint(const listint_t *h)
{
	size_t cn = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cn++;
	}
	return (cn);
}
