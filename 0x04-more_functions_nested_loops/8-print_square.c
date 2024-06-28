#include "main.h"

/**
 * print_square - print a square
 * @si: size of square
 */

void print_square(int si)
{
int x, y;

y = 0;

if (si < 1)
{
_putchar('\n');
}
while (y < si)
{
x = 0;
while (x < si)
{
_putchar('#');
x++;
}
_putchar('\n');
y++;
}
}
