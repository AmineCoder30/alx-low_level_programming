#include "lists.h"

/**
 * add_node_end - this function adds a new node 
 * at the end
 * of a list_t list.
 * @head: this varibale is the head
 * of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 * author:amine mohamed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *help;
	size_t setchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (setchar = 0; str[setchar]; setchar++)
		;

	new->len = setchar;
	new->next = NULL;
	help = *head;

	if (help == NULL)
	{
		*head = new;
	}
	else
	{
		while (help->next != NULL)
			help = help->next;
		help->next = new;
	}

	return (*head);
}