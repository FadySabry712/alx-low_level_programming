#include "main.h"

/**
 * flip_bits - counts the number of bits
 * @n: first nu
 * @m: second num
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counterbit = 0;
	unsigned long int curr;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = ex >> i;
		if (curr & 1)
			counterbit++;
	}

	return (counterbit);
}

