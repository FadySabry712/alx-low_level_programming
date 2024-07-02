#include "main.h"

/**
 * puts_half - prints half a str
 * @str: param to be printe
 * Return: half a str
 */

void puts_half(char *str)
{
int i;

for (i = 0;  str[i] != '\0'; i++)
	;

i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
