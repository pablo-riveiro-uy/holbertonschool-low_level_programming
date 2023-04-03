#include "lists.h"

/**
 * add_node_end - add a node at the end of list
 * @head: actual head of the structure
 * @str: string data to new node to add
 * Return: the new list or NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element, *aux;


	if (str != NULL)
	{
		new_element = malloc(sizeof(list_t));
		if (new_element == NULL)
			return (NULL);

		new_element->str = strdup(str);
		new_element->len = _strlen(str);
		new_element->next = NULL;

		if (*head == NULL)
		{
			*head = new_element;
			return (*head);
		}
		else
		{
			aux = *head;
			while (aux->next)
				aux = aux->next;
			aux->next = new_element;
			return (aux);
		}
	}

	return (NULL);
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
