#include "main.h"

/**
 * print_triangle - prints a triangel
 * @si: size of triangel
 */

void print_triangle(int si)
{
int h, i;

if (si > 0)
{
for (h = 1; h <= si; h++)
{
	for (i = si - h; i > 0; i--)
	{
	_putchar(' ');
	}
for (i = 0; i < h; i++)
	{
	_putchar('#');
	}
	if (h == si)
	{
	continue;
	}
	_putchar('\n');
}
}
_putchar('\n');
}
