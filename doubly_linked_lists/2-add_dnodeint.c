#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;

	/* Update pointers to insert the new node at the beginning */
	new_node->next = *head;
	new_node->prev = NULL;

	/* If the list is not empty, update the previous pointer */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update the head pointer to point to the new node */
	*head = new_node;

	return (new_node);
}
