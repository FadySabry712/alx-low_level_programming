#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: int input
 * Return: last int
 */

int print_last_digit(int n)
{
int last_no;

if (n < 0)
{
last_no = -1 * (n % 10);
}
else
{
last_no = n % 10;
}
_putchar(last_no + '0');
return (last_no);
}
