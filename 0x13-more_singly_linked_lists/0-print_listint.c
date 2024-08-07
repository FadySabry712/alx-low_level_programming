#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements
 * @h: param 1
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t n = 0;

while (h)
{
printf("%d\n", h->n);
n++;
h = h->next;
}

return (n);
}

