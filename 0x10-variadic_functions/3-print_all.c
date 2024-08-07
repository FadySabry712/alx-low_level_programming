#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - entery point
 * @format: param 1
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *s, *separator = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					j++;
					continue;
			}
			separator = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(list);
}
