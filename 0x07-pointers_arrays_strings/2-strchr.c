#include "main.h"
/**
 * *_strchr - function to search for chars
 * @s: param 1
 * @c: param 2
 * Return: searched cahr/chars
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
