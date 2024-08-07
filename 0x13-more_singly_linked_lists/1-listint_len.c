#include "lists.h"

/**
 * listint_len - returns the number of elemtns
 * @h: param 1
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t number = 0;

while (h)
{
number++;
h = h->next;
}

return (number);
}

