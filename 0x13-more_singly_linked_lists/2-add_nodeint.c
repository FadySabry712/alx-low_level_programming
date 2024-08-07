#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer
 * @n: data
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *n_list;

n_list = malloc(sizeof(listint_t));
if (!n_list)
return (NULL);

n_list->n = n;
n_list->next = *head;
*head = n_list;

return (n_list);
}

