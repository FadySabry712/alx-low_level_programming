#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to the first node
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
size_t length = 0;
int different;
listint_t *temp_list;

if (!h || !*h)
return (0);

while (*h)
{
different = *h - (*h)->next;
if (different > 0)
{
temp_list = (*h)->next;
free(*h);
*h = temp_list;
length++;
}
else
{
free(*h);
*h = NULL;
length++;
break;
}
}

*h = NULL;

return (length);
}

