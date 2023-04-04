#include "lists.h"

/**
 * add_dnodeint - add a new element to a double lnked list
 * @head: structur data head
 * @n: int to save as an element
 * Return: number of nodes of list given
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	if (head == NULL)
		return (NULL);

	new_element = malloc(sizeof(dlistint_t));

	if (!new_element)
		free(new_element);

	new_element->n = n;
	new_element->prev = NULL;
	new_element->next = *head;

	if (*head)
		(*head)->prev = new_element;

	*head = new_element;

	return (new_element);
}

