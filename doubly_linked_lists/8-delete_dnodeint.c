#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;

	/* If deleting the node at index 0, update pointers to remove */
	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}

	/* Traverse the list to find the node at the specified index */
	for (i = 0; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	/* Check if the node at the given index exists */
	if (temp == NULL)
		return (-1);

	/* Update pointers to remove the node at the specified index */
	prev->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = prev;

	free(temp);

	return (1);
}
