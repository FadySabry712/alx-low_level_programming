#include"main.h"

/**
 * get_bit - prog returns the value of a bit
 * @n: number
 * @index: index
 * Return: value of the bit,-1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	checker = n & div;
	if (checker == div)
		return (1);
	return (0);
}

