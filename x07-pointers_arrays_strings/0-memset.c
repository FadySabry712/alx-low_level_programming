#include "main.h"

/**
 * *_memset - main function
 * @s: param 1
 * @b: param 2
 * @n: param 3
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
