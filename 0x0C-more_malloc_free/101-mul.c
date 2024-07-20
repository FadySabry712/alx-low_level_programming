#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - checks if is digit
 * @c: param 1
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - length of a string
 * @s: param 1
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s++)
		a++;
	return (a);
}

/**
 * big_multiply - multiply two big number 
 * @s1: param 1
 * @s2:param 2
 * Return: product big number 
 */
char *big_multiply(char *s1, char *s2)
{
	char *rtr;
	int l_1, l_2, k, l, m, n;

	l_1 = _strlen(s1);
	l_2 = _strlen(s2);
	rtr = malloc(k = n = l_1 + l_2);
	if (!rtr)
		printf("Error\n"), exit(98);
	while (k--)
		rtr[k] = 0;

	for (l_1--; l_1 >= 0; l_1--)
	{
		if (!_isdigit(s1[l_1]))
		{
			free(rtr);
			printf("Error\n"), exit(98);
		}
		k = s1[l_1] - '0';
		m = 0;

		for (l_2 = _strlen(s2) - 1; l_2 >= 0; l_2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(rtr);
				printf("Error\n"), exit(98);
			}
			l = s2[l_2] - '0';

			m += rtr[l_1 + l2_ + 1] + (k * l);
			rtr[l_1 + l_2 + 1] = m % 10;

			m /= 10;
		}
		if (m)
			rtr[l_1 + l_2 + 1] += m;
	}
	return (rtr);
}


/**
 * main - multiply two big number 
 * @argc: [aram 1
 * @argv: param 2
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	char *rt;
	int i, j, l;

	if (argc != 3)
		printf("Error\n"), exit(98);

	l = _strlen(argv[1]) + _strlen(argv[2]);
	rt = big_multiply(argv[1], argv[2]);
	j = 0;
	i = 0;
	while (j < l)
	{
		if (rt[j])
			i = 1;
		if (i)
			_putchar(rt[j] + '0');
		j++;
	}
	if (!i)
		_putchar('0');
	_putchar('\n');
	free(rt);
	return (0);
}
