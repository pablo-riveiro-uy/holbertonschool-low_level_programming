#include "lists.h"

/**
 * print_dlistint - print every elemt of a double linked list
 * @h: structur data doulble linked list
 * Return: number of nodes of list given
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);

}
