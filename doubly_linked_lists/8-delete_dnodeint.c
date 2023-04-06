#include "lists.h"
/**
 *delete_dnodeint_at_index - insert node at index
 *@h: head
 *@idex: position to delete
 *Return: 1 on deleting -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *part1, *part2;

	if (*head == NULL)
		return (-1);
	if (!head)
		return (-1);
	part1 = *head;
	if (!part1)
		return (-1);
	if (index == 0)
	{
		 if (part1 == NULL)
			return (-1);
		part1 = part1->next;
		part1->prev = NULL;
		if (*head)
		*head = part1;
		return (1);
	}
	while (i != index && part1)
	{
		part1 = part1->next;
		i++;
	}
	if (part1->next == NULL)
	{
		part1 = part1->prev;
		part1->next = NULL;
		return (1);
	}
	if (i == index && part1)
	{
		part2 = part1->next, part1 = part1->prev;
		part1->next = part2;
		return (1);
	}
	return (-1);
}
