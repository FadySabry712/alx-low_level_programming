#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints the entire element of a list
 * @h: pointer which stores the elements to e printed
 * Return: elemnts of the list
 */

size_t print_list(const list_t *h)
{
	size_t ptr = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		ptr++;
		h = h->next;
	}
	return (ptr);
}
