
#include "lists.h"
#include <string.h>

/**
 * add_node -this is afunction to Adds a new node at the beginning
 *            of a list_t list.
 * @head: varibale how point to the head of the list_t list.
 * @str: varibale for The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         or the address of the new element.
 * author:amine mohamed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *help;
	int length;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	help = strdup(str);
	if (help == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->str = help;
	new->length = length;
	new->next = *head;

	*head = new;

	return (new);
}
