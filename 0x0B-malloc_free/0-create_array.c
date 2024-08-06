#include "main.h"

/**
 * *create_array - creats an arr of chars
 * @size: param 1 size of arr
 * @c: param 2 char
 * Return: ptr to an array
 */

char *create_array(unsigned int size, char c)
{
	char *num = malloc(size);

	if (size == 0 || num == 0)
		return (0);

	while (size--)
		num[size] = c;

	return (num);
}
