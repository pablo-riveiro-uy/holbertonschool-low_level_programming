#include "lists.h"

/**
 * get_dnodeint_at_index - fre a duble linked list
 * @head: actual head of the structure
 * @index: unsigned int to search an ordered element on list
 * Return: the element at the intex or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;


	while (i < index)
	{
		i++;
		head = head->next;
	}
	if (i == index)
		return (head);

	return (NULL);
}
