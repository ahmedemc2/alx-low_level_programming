#include "lists.h"

/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list
 *
 * @h: the address of the node
 *
 * Return: the number of elements in the double linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		h = h->next;
		element++;
	}
	return (element);
}
