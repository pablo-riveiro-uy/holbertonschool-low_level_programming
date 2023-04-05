#include "lists.h"

/**
 * free_dlistint - fre a duble linked list
 * @head: actual head of the structure
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);

}
