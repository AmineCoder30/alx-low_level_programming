#include "lists.h"

/**
 * listint_len - funtion  return the number of elements.
 * @h: head of a list.
 * Return: return number of nodes.
 * author:amine mohamed
 */
size_t listint_len(const listint_t *h)
{
	size_t cn = 0;

	while (h != NULL)
	{
		h = h->next;
		cn++;
	}
	return (cn);
}
