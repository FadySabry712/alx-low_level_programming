#include "main.h"

/**
*puts2 - print every other letter
*@str: string tp be processed
*Return: every other letter
*/

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
