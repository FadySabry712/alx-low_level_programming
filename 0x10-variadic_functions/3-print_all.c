#include "variadic_functions.h"

/**
 * format_char - entery
 * @separator: param 1
 * @ap: param 2
 */

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - entery point
 * @separator: param 1
 * @ap: param 2
 */

void format_int(char *separator, va_list ap)
{
printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - entery
 * @separator: param 1
 * @ap: param 2
 */

void format_float(char *separator, va_list ap)
{
printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - entery
 * @separator: param 1
 * @ap: param 2
 */

void format_string(char *separator, va_list ap)
{
char *s = va_arg(ap, char *);
	switch ((int)(!s))
	case 1:
		s = " (nil)";
	printf("%s%s", separator, s);
}

/**
 *print_all  - entery
 * @format: param 1
 */

void print_all(const char * const format, ...)
{
int a = 0, m;
char *separator = "";
va_list ap;
token_t tokens[] = {
	{"c", format_char},
	{"a", format_int},
	{"f", format_float},
	{"s", format_string},

	{NULL, NULL}
};

va_start(ap, format);
while (format && format[a])
{
	m = 0;
	while (tokens[a].token)
	{
		if (format[a] == tokens[m].token[0])
		{
		tokens[m].f(separator, ap);
		separator = ", ";
		}
		m++;
}
a++;
}
	printf("\n");
	va_end(ap);
}
