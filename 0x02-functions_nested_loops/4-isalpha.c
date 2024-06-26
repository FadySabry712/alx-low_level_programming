#include "main.h"

/**
 * _isalpha - check if the char is alphabet
 * @c:  cahr to be checked
 * Return: 1 for alphabet 0 for other
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
