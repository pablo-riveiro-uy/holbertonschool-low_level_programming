#include "lists.h"

/**
 * sum_dlistint - add ints from a double linked list
 * @head: actual head of the list
 * Return: sum of elements or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *nums;

	if (!head)
		return (0);

	nums = head;

	while (nums && nums->next)
	{
		nums = nums->next;
		sum += nums->n;
	}

	return (sum);
}
