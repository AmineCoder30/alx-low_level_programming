#include "lists.h"

/**
 * freestp2 - function to frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void freestp2(list_pt **head)
{
	list_pt *temp;
	list_pt *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - function frees a linked list.
 * @h: head of a list.
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nd = 0;

	list_pt *hp, *nw, *add;
	listint_t *current;

	hp = NULL;
	while (*h != NULL)
	{
		nw = malloc(sizeof(list_pt));

		if (nw == NULL)
			exit(98);

		nw->p = (void *)*h;
		nw->next = hp;
		hp = nw;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				freestp2(&hp);
				return (nd);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		nd++;
	}

	*h = NULL;
	freestp2(&hp);
	return (nd);
}
