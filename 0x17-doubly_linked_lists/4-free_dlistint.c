#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 *
 * @head: the address to the first element of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_header;
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while (head != NULL)
	{
		tmp_header = head;
		head = head->next;
		free(tmp_header);
	}
}
