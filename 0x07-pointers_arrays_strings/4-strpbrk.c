#include "main.h"

/**
 * *_strpbrk - search for a sring to any set of bytes
 * @s: param 1
 * @accept: param 2
 * Return: searched string
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;

i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
	if (accept[j] == s[i])
	{
	p = &s[i];
	return (p);
	}
	j++;
}
i++;
}
return (0);
}
