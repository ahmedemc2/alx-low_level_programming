#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index of a linked list
 *
 * @head: pointer to pointer that point to the fisrt element of the linked list
 * @index: the index to the element to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int i = 0;

	temp1 = *head;
	if (head == NULL && !*head)
		return (-1);
	if (index == 0)
	{
		temp1 = *head;
		*head = (*head)->next;
		free(temp1);
		return (1);
	}
	temp1 = *head;
	while (temp1)
	{
		if (i == index)
		{
			temp2->next = temp1->next;
			free(temp1);
			return (1);
		}
		i++;
		temp2 = temp1;
		temp1 = temp1->next;
	}
	return (-1);
}
