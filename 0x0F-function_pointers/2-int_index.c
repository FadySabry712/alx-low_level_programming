#include "function_pointers.h"

/**
* int_index - return index place
* @array: arr
* @size: size of elements
* @cmp: ptr to func
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int j;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (j = 0; j < size; j++)
{
if (cmp(array[j]))
return (j);
}
return (-1);
}
