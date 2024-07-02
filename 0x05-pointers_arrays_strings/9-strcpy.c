#include "main.h"

/**
 * _strcpy - copy elements from array tp omther
 * @dest: param 1
 * @src: param 2
 * Return: result
 */

char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}

