#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints postive numbers
 * @argc: arg 1
 * @argv: arg2
 * Return: 0 Sucess
 */

int main(int argc, char *argv[])
{
int s = 0;
char *str;

while (--argc)
{
	for (str = argv[argc]; *str; str++)
		if (*str < '0' || *str > '9')
			return (printf("Error\n"), 1);
	s += atoi(argv[argc]);
}
printf("%d\n", s);
return (0);
}
