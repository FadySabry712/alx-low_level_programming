#include "variadic_functions.h"

/**
 * sum_them_all - entery point
 * @n: param 1
 * @...: param 2
 * Return: sum of all the args
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
int j = n;
va_list ap;

if (!n)
	return (0);
va_start(ap, n);
while (j--)
	sum += va_arg(ap, int);
va_end(ap);
return (sum);

}
