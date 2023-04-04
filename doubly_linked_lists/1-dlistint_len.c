#include "lists.h"

/**
 * dlistint_len - print the lenght of a linked list
 * @h: structur data
 * Return: number of nodes of list given
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

