#include "lists.h"
/**
 *delete_dnodeint_at_index - insert node at index
 *@h: head
 *@idex: position to delete
 *Return: 1 on deleting -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, len;
	dlistint_t *part1, *part2;
	dlistint_t *aux = *head;

	if (head == NULL)
		return (-1);
	if (*head == NULL && index == 0)
		return (-1);
	for (len = 0; aux; len++)
		aux = aux->next;
	if (index > len)
		return (-1);
	if (index == 0)
		(*head)->next = NULL;

	part1 = *head;
	while (i != index - 1)
	{
		part1 = part1->next;
		i++;
	}

	if (part1->next == NULL)
	{
		part1 = part1->prev;
		part1->next = NULL;
	}
	part2 = part1->next, part1 = part1->prev;

	part1->next = part2;
	return (1);
}
