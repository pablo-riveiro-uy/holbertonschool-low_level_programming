#include "lists.h"

/**
 * print_list - calc the lenght of a linked list
 * @h: structur data
 * Return: number of nodes of list given
 */

size_t print_list(const list_t *h)
{
	Node temp = h.head;
	int count = 0;

	while (temp != null)
	{
		count++;
		temp = temp.next;
	}
	return (count);
}
