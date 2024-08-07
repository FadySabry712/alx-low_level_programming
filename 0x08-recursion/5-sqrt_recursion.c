#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root
 * @n: param 1
 * Return:square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find the natural
 * @n: param 1
 * @i: param 2
 * Return:square root
 */

int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (actual_sqrt_recursion(n, i + 1));
}
