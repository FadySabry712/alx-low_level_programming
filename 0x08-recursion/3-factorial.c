#include "main.h"

/**
 * factorial - return factorila of a num
 * @n: param 1
 * Return: num factorial
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
