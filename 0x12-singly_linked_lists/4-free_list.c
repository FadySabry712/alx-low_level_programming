#include <stdlib.h>
#include "lists.h"

/*
 * free_list - main func of the code
 * @head: head of link list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
