#include "main.h"

/**
 * *string_toupper - captilaize letters
 * @str: param 1
 * Return: letter captialized
 */

char  *string_toupper(char *str)
{
int j;

for (j = 0; str[j] != '\0'; j++)
{
if (str[j] >= 97 && str[j] <= 122)
{
str[j] = str[j] - 32;
}
}
return (str);
}
