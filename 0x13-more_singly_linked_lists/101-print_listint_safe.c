#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of nodes
 * in a looped listint_t list
 * @head: A pointer to the head of the list
 * Return: 0 If the list is not looped
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *t, *h;
size_t nodes_looped = 1;

if (head == NULL || head->next == NULL)
return (0);

t = head->next;
h = (head->next)->next;

while (h)
{
if (t == h)
{
t = head;
while (t != h)
{
nodes_looped++;
t = t->next;
h = h->next;
}

t = t->next;
while (t != h)
{
nodes_looped++;
t = t->next;
}

return (nodes_looped);
}

t = t->next;
h = (h->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Prints a linked list
 * @head: A pointer
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes_safe, index_safe = 0;

nodes_safe = looped_listint_len(head);

if (nodes_safe == 0)
{
for (; head != NULL; nodes_safe++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (index_safe = 0; index_safe < nodes_safe; index_safe++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes_safe);
}

