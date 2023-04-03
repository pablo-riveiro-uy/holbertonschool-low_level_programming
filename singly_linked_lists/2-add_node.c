#include "lists.h"

/**
 * add_node - add a node to a linked list
 * @head: actual head of the structure
 * @str: string data to new node to add
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;

	if (head != NULL && str != NULL)
	{
		new_element = malloc(sizeof(list_t));
		if (new_element == NULL)
			return (NULL);

		new_element->str = strdup(str);
		new_element->len = _strlen(str);
		new_element->next = *head;
		return (new_element);
	}
	return (0);
}

/**
 * _strlen - calc the length of a string
 * @st: String to count
 * Return: String length
 */

int _strlen(const char *st)
{
	int count = 0;

	while (*st)
	{
		st++;
		count++;
	}
	return (count);
}
