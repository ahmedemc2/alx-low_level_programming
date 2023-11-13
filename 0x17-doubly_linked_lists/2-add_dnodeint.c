#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list
 *
 * @head: a pointer to a pointer that contain the adrress of the new node
 * @n: the data to be stored
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp_header;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	new_node->n = n;
	new_node->prev = NULL;
	tmp_header = *head;

	if (tmp_header != NULL)
		tmp_header->prev = new_node;
	*head = new_node;
	return (new_node);
}