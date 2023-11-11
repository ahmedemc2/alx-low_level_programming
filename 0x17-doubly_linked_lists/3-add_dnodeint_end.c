#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 *
 * @head: the address of the first element of the list
 * @n: the data to be stored
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp_header;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	tmp_header = *head;
	if (tmp_header != NULL)
	{
		while (tmp_header->next != NULL)
			tmp_header = tmp_header->next;
		tmp_header->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = tmp_header;
	return (new_node);
}
