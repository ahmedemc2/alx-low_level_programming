#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list
 *
 * @head: pointer that point to the first node
 * @n: the integer data to be add
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp_head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	tmp_head = *head;

	if (tmp_head != NULL)
		tmp_head->prev = new_node;
	*head = new_node;

	return (new_node);
}
