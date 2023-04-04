#include "lists.h"

/**
 * dlistint_t - add a new element to a double lnked list
 * @head: structur data head
 * @n: int to save as an element
 * Return: number of nodes of list given
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	if (head != NULL)
	{
		new_element = malloc(sizeof(dlistint_t));
		if (new_element == NULL)
			return (NULL);

		new_element->n = n;
		new_element->next = *head;
		*head = new_element;
		return (new_element);
	}
	return (0);
}
