#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list
 *
 * @head: the address of the first node
 * @index: the index to the node to reached
 *
 * Return: NULL if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (NULL);
	for (counter = 0; counter < index; counter++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head);
}
