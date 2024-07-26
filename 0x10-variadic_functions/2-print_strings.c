#include "variadic_functions.h"

/**
 * print_strings - entery point
 * @separator: param 1
 * @n: param 2
 * @...: param 3
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
int j = n;
char *s;
va_list ap;

if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (j--)
	printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
			j ? (separator ? separator : "") : "\n");
va_end(ap);
}
