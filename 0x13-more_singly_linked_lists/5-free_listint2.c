#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: pointer to pointer
 *
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr, *tmp;

	ptr = *head;
	while (ptr)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
	*head = NULL;
}
