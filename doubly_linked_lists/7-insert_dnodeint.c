#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL, new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}
	for (i = 0; i < idx - 1 && temp; i++)
		temp = temp->next;
	if (!temp)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
