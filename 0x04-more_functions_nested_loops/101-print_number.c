#include "main.h"

/**
* print_number - print integer
*@c: integer printed
*/

void print_number(int c)
{
unsigned int num = c;

if (c < 0)
{
_putchar('-');
num = -num;
}
if ((num / 10) > 0)
{
print_number(num / 10);
}
_putchar((num % 10) + '0');
}
