#include "main.h"

/**
 * _puts_recursion - print  asrinig using recusiron method
 * @s: param 1
 * Return: a printed string
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
