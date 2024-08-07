#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the first node
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_list = NULL;
listint_t *next_list = NULL;

while (*head)
{
next_list = (*head)->next;
(*head)->next = prev_list;
prev_list = *head;
*head = next_list;
}

*head = prev_list;

return (*head);
}


