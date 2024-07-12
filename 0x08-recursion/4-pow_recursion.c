#include "main.h"

/**
 * _pow_recursion - return thr power x raised to the pwoer y
 * @x: param 1
 * @y: param 2
 * Return: the value of x
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 1)
{
return (x);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
