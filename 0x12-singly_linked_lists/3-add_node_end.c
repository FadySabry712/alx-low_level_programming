#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - append new element
 * @head: start of link list
 * @str: str to be added
 * Return: new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	new->len = i;
	new->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = new;
	}
	else
	{
		while (current != NULL)
			current = current->next;
		current->next = new;
	}
	return (*head);
}
