#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list
 *
 * @h : a pointer to the first node of the list
 *
 * Return: the number of elements in the list
*/

size_t print_list(const list_t *h)
{
	int count = 0;
	const struct list_s *ptr = NULL;

	if (h)
	{
		ptr = h;
		while (ptr != NULL)
		{
			if (ptr->str)
				printf("[%d] %s\n", ptr->len, ptr->str);
			else
				printf("[%d] (%s)\n", 0, "nil");
			count++;
			ptr = ptr->next;
		}
	}
	return (count);
}
