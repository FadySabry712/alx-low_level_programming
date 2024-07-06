#include "main.h"

/**
 * rot13 - encodes a string
 * @s: param 1
 * Return: encoded str
 */

char *rot13(char *s)
{
	int i;
	char rot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ";
	char ROT[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot[i])
			{
			*s = ROT[i];
			break;
			}
		}
		s++;
	}
	return (ptr);
}
