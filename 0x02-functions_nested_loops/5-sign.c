#include "main.h"

/**
 * print_sign - checks the sign of a number
 * @c: the number to be checked
 * Return: 1 if c is postive 0 if c is zer -1 if c is negative
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
