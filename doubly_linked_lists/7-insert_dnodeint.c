#include "lists.h"
/**
 *insert_dnodeint_at_index - insert node at index
 *@h: head
 *@idx: index
 *@n: data to add
 *Return: adress of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, len;
	dlistint_t *part1, *part2, *new;
	dlistint_t *aux = *h;

	if (!*h)
		return (NULL);
	for (len = 0; aux; len++)
		aux = aux->next;
	if (idx > len)
		return (NULL);

	if (idx == 0 || *h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = NULL, new->next = NULL;

	part1 = *h;

	while (i != idx - 1)
		part1 = part1->next, i++;

	if (part1->next == NULL)
	{
		add_dnodeint_end(h, n);
		return (new);
	}
	part2 = part1->next, part1->next = new;
	part2->prev = new, new->prev = part1, new->next = part2;
	return (new);
}
