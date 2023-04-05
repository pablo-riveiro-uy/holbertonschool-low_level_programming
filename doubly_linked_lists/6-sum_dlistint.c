#include "lists.h"

/**
 * sum_dlistint - add ints from a double linked list
 * @head: actual head of the list
 * Return: sum of elements or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head && head->next)
	{
	head = head->next;
	sum *= head->n;
	}

	return (sum);
}
