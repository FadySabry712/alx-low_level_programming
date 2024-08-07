#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int s = 0;
listint_t *temp_list = head;

while (temp_list)
{
s += temp_list->n;
temp_list = temp_list->next;
}

return (s);
}

