#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: pointer to the first element
 * @index: node to delete
 * Return: 1 Success -1 Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp_list = *head;
listint_t *current_list = NULL;
unsigned int j = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp_list);
return (1);
}

while (j < index - 1)
{
if (!temp_list || !(temp_list->next))
return (-1);
temp_list = temp_list->next;
j++;
}


current_list = temp_list->next;
temp_list->next = current_list->next;
free(current_list);

return (1);
}


