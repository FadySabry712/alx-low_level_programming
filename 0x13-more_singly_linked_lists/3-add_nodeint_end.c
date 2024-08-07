#include "lists.h"

/**
 * add_nodeint_end - adds an lement at the end
 * @head: pointer
 * @n: data
 * Return: pointer to new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_list;
listint_t *temp_list = *head;

new_list = malloc(sizeof(listint_t));
if (!new_list)
return (NULL);

new_list->n = n;
new_list->next = NULL;
if (*head == NULL)
{
*head = new_list;
return (new_list);
}

while (temp_list->next)
temp_list = temp_list->next;

temp_list->next = new_list;

return (new_list);
}


