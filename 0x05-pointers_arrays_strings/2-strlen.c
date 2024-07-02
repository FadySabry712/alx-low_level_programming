#include "main.h"

/**
*_strlen - returns length
*@s: param
*Return: str length
*/

int _strlen(char *s)
{
int count;

for (count = 0; *s != '0'; s++)
{
++count;
}
return (count);
}
