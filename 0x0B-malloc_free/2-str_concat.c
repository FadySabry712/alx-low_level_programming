#include "main.h"

/**
 * _strlen - gets string len
 * @s: param 1 string
 * Return: number of int type
 */

int _strlen(char *s)
{
int i = 0;
for (; s[i] != '\0'; i++)
;
return (i);
}

/**
 * *str_concat - concatenates strings
 * @s1: param 1
 * @s2: param 2
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
int str1, str2, n;
char *p;

if (s1 == NULL)
	s1 = "\0";
if (s2 == NULL)
	s2 = "\0";

str1 = _strlen(s1);
str2 = _strlen(s2);
p = malloc((str1 + str2) *sizeof(char) + 1);
if (p == 0)
	return (0);

for (n = 0; n <= str1 + str2; n++)
{
	if (n < str1)
		p[n] = s1[n];
	else
		p[n] = s2[n - str1];
}
p[n] = '\0';
return (p);
}
