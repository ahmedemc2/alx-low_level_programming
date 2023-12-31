#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 *
 * @head: pointer to pointer
 *
 * Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *current;

	if (!head || !*head)
		return (NULL);

	current = *head;
	next = current->next;
	(*head)->next = NULL;
	while (next != NULL)
	{
		current = next;
		next = current->next;
		current->next = *head;
		*head = current;
	}
	return (*head);
}
