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
	list_t *n_node, *c_node;
	size_t i;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	n_node->len = i;
	n_node->next = NULL;
	c_node = *head;

	if (c_node == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (c_node->next != NULL)
			c_node = c_node->next;
		c_node->next = n_node;
	}
	return (*head);
}
