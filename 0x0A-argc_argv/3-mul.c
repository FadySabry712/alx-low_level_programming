#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints two sums of  numbs
 * @argc: param 1
 * @argv: crab 2
 * Return: 0 *successs>
 */

int main(int argc, char *argv[])
{
	int s;

	if (argc == 3)
	{
		s = atoi(argv[1]) * atoi((argv[2]));
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
		return (0);
}
