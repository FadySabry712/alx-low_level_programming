#include "main.h"

/**
 * set_bit - prog sets the value of a bit to 1
 * @n: number
 * @index: index
 * Return: 1 success, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}

