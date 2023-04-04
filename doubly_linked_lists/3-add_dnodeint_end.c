#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of list
 * @head: actual head of the structure
 * @n: string data to new node to add
 * Return: the new list or NULL
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element, *aux;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;
	if (*head == NULL)
	{
		*head = new_element;
		return (*head);
	}
	else
	{
		aux = *head;
		while (aux && aux->next)
			aux = aux->next;
		new_element->prev = aux;
		aux->next = new_element;
		return (new_element);
	}
	return (NULL);
}
