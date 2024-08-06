#include "main.h"

/**
 * _strdup - ptr to new memory space
 * @str: param 1 string
 * Return: 0 Sucess
 */

char *_strdup(char *str)
{
int n = 0, s = 0;
char *p;

if (str == NULL)
	return (NULL);

for (; str[s] != '\0'; s++)
;

p = malloc(s * sizeof(*str) + 1);

if (p == 0)
	return (NULL);
else
{
for (; n < s; n++)
	p[n] = str[n];
}
return (p);
}
