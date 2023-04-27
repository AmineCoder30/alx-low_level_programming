#include "lists.h"
/**
 * add_node - function is for adds a new node at the beginning
 * of a list_t list.
 * @head: varibale for head of the linked list.
 * @str: varibale for string to store in the list.
 * Return: address of the head.
 * author:amine mohamed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t f;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (f = 0; str[f]; f++)
		;

	new->len = f;
	new->next = *head;
	*head = new;

	return (*head);
}
