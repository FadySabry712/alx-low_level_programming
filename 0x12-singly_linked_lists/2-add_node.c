#include "lists.h"
#include "stdlib.h"
#include "string.h"

/*
 * add_node - preappend a node to the start
 * @head: ptr to list_t list
 * @str: array of strings or nums to be added
 * Return: preappended list values
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp_list;
	int len = 0;

	temp_list = malloc(sizeof(list_t));
	if (temp_list == NULL)
	{
		return (NULL);
	}
	while (str[len])
		len++;

	temp_list->len = len;
	temp_list->str = strdup(str);
	temp_list->next = *head;
	*head = temp_list;
	return (temp_list);

}
