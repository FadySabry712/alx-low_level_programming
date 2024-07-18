#include "main.h"

/**
 * *malloc_checked - using malloc to replac memory
 *@b: param 1
 *Return: a pointer to an array
 */

void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);

if (ptr == 0)
	exit(98);

return (ptr);
}
