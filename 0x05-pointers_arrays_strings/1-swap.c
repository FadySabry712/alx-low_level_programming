#include "main.h"

/**
*swap_int - swap the value pf two intgers
*@a: first var
*@b: second var
*Return: swapped vars
*/

void swap_int(int *a, int *b)
{
int var;

var = *a;
*a = *b;
*b = var;
}
