#include "main.h"
#include "stdio.h"

/**
 * string_nconcat - joins two strings togther
 * @s1: param 1
 * @s2: param 2
 * @n: param 3
 * Return: pointer to memeory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, l, len_a, len_b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len_a = 0; s1[len_a] != '\0'; len_a++)
		;
	for (len_b = 0; s2[len_b] != '\0'; len_b++)
		;

	s = malloc(len_a + n + 1);
		if (s == NULL)
		{
			return (NULL);
		}
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (l = 0; s1[l] != '\0'; l++)
	{
		s[l] = s2[l];
		i++;
	}
	s[i] = '\0';
	return (s);
}
