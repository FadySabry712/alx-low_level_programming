#include "lists.h"

/**
 * list_len - returns the number of the elements
 * @h: param 1 'linked list'
 * Return: no of elements
 */

size_t list_len(const list_t *h)
{
	size_t pl = 0;

	while (h)
	{
		h = h->next;
		pl++;
	}

	return (pl);
}
