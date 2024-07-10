#include "main.h"

/**
 * *_strstr - searcch for a substring
 * @haystack: param 1
 * @needle: param 2
 * Return: if a substring is found point to its begining
 */

char *_strstr(char *haystack, char *needle)
{
int i;

if (*needle == 0)
	{
	return (haystack);
	}
while (*haystack)
	{
	i = 0;

	if (haystack[i] == needle[i])
		{
		do {
			if (needle[i + 1] == '\0')
				return (haystack);

			i++;
		} while (haystack[i] == needle[i]);
		}
	haystack++;
	}
return ('\0');
}
