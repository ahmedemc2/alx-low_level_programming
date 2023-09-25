#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 *
 * @head : pointer to pointer that ponts to the the first element of the list
 * @n : the element that contain the integer
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail = malloc(sizeof(listint_t));
	listint_t *tail = *head;

	if (!new_tail)
		return (NULL);
	while (tail && tail->next)
		tail = tail->next;
	new_tail->n = n;
	new_tail->next = NULL;
	if (!tail)
		*head = new_tail;
	else
		tail->next = new_tail;
	return (new_tail);
}
