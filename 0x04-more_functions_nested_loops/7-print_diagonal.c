#include "main.h"

/**
 * print_diagonal - draws diagonal chars
 * @n: no of tmes chars is printed
 */

void print_diagonal(int n)

{
if (n <= 0)
{
	_putchar('\n');
}
else
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
	_putchar('\\');
else if (j < i)
	_putchar(' ');
}
_putchar('\n');
}
}
}
