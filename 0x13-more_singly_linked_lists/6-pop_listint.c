#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 *
 * @head : pointer to pointer that point to the head of the linked list
 *
 * Return: the head node's data, or 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *ptr = *head;

	if (!*head)
		return (0);

	*head = ptr->next;
	x = ptr->n;
	return (x);
}
