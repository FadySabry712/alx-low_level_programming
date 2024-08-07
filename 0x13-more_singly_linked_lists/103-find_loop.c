#include "lists.h"

/**
 * find_listint_loop - finds the loop in alist
 * @head: linked list to search
 * Return: address of the node where the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow_find = head;
listint_t *fast_find = head;

if (!head)
return (NULL);

while (slow_find && fast_find && fast_find->next)
{
fast_find = fast_find->next->next;
slow_find = slow_find->next;
if (fast_find == slow_find)
{
slow_find = head;
while (slow_find != fast_find)
{
slow_find = slow_find->next;
fast_find = fast_find->next;
}
return (fast_find);
}
}

return (NULL);
}

