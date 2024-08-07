#include "lists.h"

/**
 * get_nodeint_at_index - returns the node in a linked list
 * @head: param 1 first node
 * @index: param 2 index of the node
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j = 0;
listint_t *temp_list = head;

while (temp_list && j < index)
{
temp_list = temp_list->next;
j++;
}

return (temp_list ? temp_list : NULL);
}

