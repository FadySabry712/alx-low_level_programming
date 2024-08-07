#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
* op_add - Returns the sum of two nums
* @a: param 1
* @b: param 2
* Return: The sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - Returns the difference of two nums
* @a: param 2
* @b: param 2
* Return: The difference of a and b
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - Returns the multiplication  of two numbers
* @a: param 1
* @b: param 2
* Return: The multiplication of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - Returns the division
* @a: param 1
* @b: param 2
* Return: The diviion of a and b
*/
int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod - Returns the remainder of the division
* @a: param 1
* @b: param 2
* Return: The remainder of the division of a and  b
*/
int op_mod(int a, int b)
{
return (a % b);
}
