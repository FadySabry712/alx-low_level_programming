#include "lists.h"
#include "stdlib.h"
#include "string.h"

/*
 * add_node - entery point
 * @head: param 1 'ptr to list_t list'
 * @str: param 2 'array of strings to be added'
 * Return: preappended list value
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
