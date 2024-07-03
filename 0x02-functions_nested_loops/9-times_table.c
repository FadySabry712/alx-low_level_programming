#include "main.h"

/**
 * times_table - 9 times tanle
 * return: time table of 9
 */

void times_table(void)
{
int number;
int multiply;
int prod;

for (number = 0; number <= 9; number++)
{
_putchar(48);
	for (multiply = 1; multiply <= 1; multiply++)
	{
	_putchar(',');
	_putchar(' ');

	prod = number * multiply;

	if (prod <= 9)

		_putchar(' ');
	else
	_putchar((prod / 10) + 48);

_putchar((prod % 10) + 48);
	}
_putchar('\n');
}
}
