#include "main.h"

/**
 * _strspn - gets the lenegth of a aprefix
 * @s: param 1
 * @accept: param 2
 * Return: lemgth of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
{
return (i);
}
}
}
return (i);
}



