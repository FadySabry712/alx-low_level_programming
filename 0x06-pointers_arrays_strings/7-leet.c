#include "main.h"

/**
 * leet - encodes a string
 * @c: param 1
 * Return: encoded str
 */

char *leet(char *c)
{
char *cpa = c;
char key[] = {'A', 'E', 'O', 'Z', 'L'};
int value[] = {'4', '3', '0', '7', '1'};
unsigned int i;

while (*c)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (*c == key[i] || *c == key[i] + 32)
{
*c = 48 + value[i];
break;
}
}
c++;
}
return (cpa);
}
