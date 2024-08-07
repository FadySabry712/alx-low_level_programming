#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals
 * @a: param 1
 * @size: param 2
 * Return : sum of diagonals
 */

void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i];
sum2 += a[size - i - 1];
a += size;
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
