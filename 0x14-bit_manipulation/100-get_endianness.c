#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	int i;
	char *ptr;

	i = 1;
	ptr = (char *)&i;
	return (*ptr);
}

