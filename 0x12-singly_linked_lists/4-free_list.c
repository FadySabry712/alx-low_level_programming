#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: list to be freed
 */
void free_list(list_t *head)
{
list_t *temp_list;

while (head)
{
temp_list = head->next;
free(head->str);
free(head);
head = temp_list;
}
}
