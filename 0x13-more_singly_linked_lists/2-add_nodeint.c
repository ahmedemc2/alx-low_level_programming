#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 *
 * @head: a pointer to pointer that contain the address of the 1st element
 * @n: the integer element
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
