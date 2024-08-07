#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node
 * @idx: index to the new nodr
 * @n: data to insert
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *new_list;
listint_t *temp_list = *head;

new_list = malloc(sizeof(listint_t));
if (!new_list || !head)
return (NULL);

new_list->n = n;
new_list->next = NULL;

if (idx == 0)
{
new_list->next = *head;
*head = new_list;
return (new_list);
}

for (j = 0; temp_list && j < idx; j++)
{
if (j == idx - 1)
{
new_list->next = temp_list->next;
temp_list->next = new_list;
return (new_list);
}
else
temp_list = temp_list->next;
}

return (NULL);
}


