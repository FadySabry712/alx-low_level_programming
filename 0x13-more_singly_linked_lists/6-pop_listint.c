#include "lists.h"

/**
 * pop_listint - deletes the first  node of a linked list
 * @head: pointer
 * Return: the data inside list
 */
int pop_listint(listint_t **head)
{
listint_t *temp_list;
int number;

if (!head || !*head)
return (0);

number = (*head)->n;
temp_list = (*head)->next;
free(*head);
*head = temp_list;

return (number);
}

