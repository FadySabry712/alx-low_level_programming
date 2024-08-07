#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - print name using ptr to func
* @name: string param 1
* @f: ptr to funct param 2
* Return: void
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}

