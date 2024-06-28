#include "main.h"

/**
 * print_line - prints lines straight
 * @n: number of times to be printed
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
