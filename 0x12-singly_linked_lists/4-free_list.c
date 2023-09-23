#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head : the first node of the linked list to be freed
 *
 * Return: nothing
*/

void free_list(list_t *head)
{
	list_t *ptr, *ptr2;

	if (!head)
		return;
	ptr = head;
	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = ptr2;
	}
}
