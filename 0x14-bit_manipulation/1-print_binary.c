#include "main.h"

/**
 * _pow - func calculates base * power
 * @base: base
 * @power: power
 * Return: value of base * power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	for (i = 1; i <= power; i++)
		number *= base;
	return (number);
}

/**
 * print_binary - prints a number in bi
 * @n: numb
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, checker;
	char flags;

	flags = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		checker = n & div;
		if (checker == div)
		{
			flags = 1;
			_putchar('1');
		}
		else if (flags == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}

