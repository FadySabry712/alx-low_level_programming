#include "variadic_functions.h"

/**
 * print_numbers - entery point
 * @separator: param 1
 * @n: param 2
 * @...: param 3
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
int j = n;
va_list ap;

if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (j--)
	printf("%d%s", va_arg(ap, int),
			j ? (separator ? separator : "") : "\n");
	va_end(ap);

}
