#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: The pointer to the head of linked list
 *
 */

void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
	free(head);
}
