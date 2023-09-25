#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head : pointer to the linked list
 *
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr)
	{
		head = ptr;
		ptr = ptr->next;
		free(head);
	}
}
