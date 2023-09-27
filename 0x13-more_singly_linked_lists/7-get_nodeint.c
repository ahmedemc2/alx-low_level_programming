#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 *
 * @head: the pointer to the head of the linked list
 * @index: the node index we look for
 *
 * Return: NULL if the node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
