#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: param 1
 * @av: param 2
 * Return: 0 Success
 */

char *argstostr(int ac, char **av)
{
int j, a, x = 0, l = 0;

char *string;

if (ac == 0 || av == NULL)
return (NULL);

for (j = 0; j < ac; j++)
{
for (a = 0; av[j][a]; a++)
l++;
}
l += ac;
string = malloc(sizeof(char) * l + 1);
if (string == NULL)
return (NULL);

for (j = 0; j < ac; j++)
{
for (a = 0; av[j][a]; a++)
{
string[x] = av[j][a];
x++;
}
if (string[x] == '\0')
{
string[x++] = '\n';
}
}
return (string);
}
