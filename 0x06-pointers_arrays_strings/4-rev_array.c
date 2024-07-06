#include "main.h"

/**
 * reverse_array - reverse integers in an array
 * @a: array
 * @n: number of elemnts
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
int i;
int y;
int temp;

	for (i = 0, y = (n - 1); i < y; i++, y--)
	{
		temp = a[i];
		a[i] = a[y];
		a[y] = temp;
	}
}
