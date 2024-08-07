#include "lists.h"

/**
 * free_listint - frees a list
 * @head:  list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *temp_list;

while (head)
{
temp_list = head->next;
free(head);
head = temp_list;
}
}

