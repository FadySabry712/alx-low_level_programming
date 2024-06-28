#include "main.h"

/**
* _isupper - chechls if char is uppercase
* @c: char to be checked
* Return: 1 if true 0 if not
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
