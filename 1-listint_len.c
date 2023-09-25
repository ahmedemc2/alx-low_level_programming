#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 *
 * @h: pointer to the first element of the list
 *
 * Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
