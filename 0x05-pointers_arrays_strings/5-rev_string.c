#include "main.h"

/**
 * rev_string - reverse string
 * @s: paramter
 * Return: reversed string
 */

void rev_string(char *s)
{
int j, i;
char temp;

for (j = 0; s[j] != '\0'; ++j)
	;
for (i = 0; i < 1 / 2; i++)
{
temp = s[i];
s[i] = s[j - 1 - i];
s[j - 1 - i] = temp;
}
}
