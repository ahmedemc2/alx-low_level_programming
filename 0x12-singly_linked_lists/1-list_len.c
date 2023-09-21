#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 *
 * @h : a pointer to the first node of the list
 *
 * Return: the number of elements in the list
*/

size_t list_len(const list_t *h)
{
	int count = 0;
	const struct list_s *ptr = NULL;

	if (h)
	{
		ptr = h;
		while (ptr != NULL)
		{
			count++;
			ptr = ptr->next;
		}
	}
	return (count);
}
