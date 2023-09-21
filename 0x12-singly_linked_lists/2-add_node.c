#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 *
 * @head : a pointer to a pointer that point on the head of the list
 * @str: the element to be added to the list
 *
 * Return: NULL if it failed or the address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i =0;

	new = malloc(sizeof(list_t));
	if (!new || !head)
		return (NULL);
	if (str)
	{
		new->str = str;
		if (!new->str)
		{
			free(new->str);
			return (NULL);
		}
		for (; *(str + i) != '\0'; i++)
			;
		new->len = i;
	}
	new->next = head;
	*head = new;
	return (new);
}
