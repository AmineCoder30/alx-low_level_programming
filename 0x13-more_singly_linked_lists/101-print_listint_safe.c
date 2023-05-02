#include "lists.h"

/**
 * free_listp - function to frees a linked list
 * @head: head of a list.
 * Return: no return.
 * author :amine mohamed
 */
void free_listp(list_pt **head)
{
	list_pt *temp;
	list_pt *curent;

	if (head != NULL)
	{
		curent = *head;
		while ((temp = curent) != NULL)
		{
			curent = curent->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - function to  prints a linked list.
 * @head: head of a list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ndes = 0;
	list_pt *hr, *nw, *add;

	hr = NULL;
	while (head != NULL)
	{
		nw = malloc(sizeof(list_pt));

		if (nw == NULL)
			exit(98);

		nw->p = (void *)head;
		nw->next = hr;
		hr = nw;

		add = hr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hr);
				return (ndes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		ndes++;
	}

	free_listp(&hr);
	return (ndes);
}
