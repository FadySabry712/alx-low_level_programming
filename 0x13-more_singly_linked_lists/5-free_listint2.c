#include "lists.h"

/**
 * free_listint2 - frees a lis
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
listint_t *temp_list;

if (head == NULL)
return;

while (*head)
{
temp_list = (*head)->next;
free(*head);
*head = temp_list;
}

*head = NULL;
}

