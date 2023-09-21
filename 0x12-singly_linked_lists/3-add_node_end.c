#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 *
 * @head: a pointer to pointer that point on the head of the linked list
 * @str: the element to be added to the list
 *
 * Return: the address of new element, NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail;
	list_t *node = *head;
	unsigned int i = 0;

	new_tail = malloc(sizeof(list_t));
	if (!new_tail || !head)
		return (NULL);
	if (str)
	{
		new_tail->str = strdup(str);
		if (!new_tail->str)
		{
			free(new_tail);
			return (NULL);
		}
		for (; *(str + i); i++)
			;
		new_tail->len = i;
	}
	if (node)
	{
		while (node->next)
		{
			node = node->next;
		}
		node->next = new_tail;
	}
	else
		*head = new_tail;
	return (new_tail);
}
