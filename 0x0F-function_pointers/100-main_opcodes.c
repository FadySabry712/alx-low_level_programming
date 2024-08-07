#include <stdio.h>
#include <stdlib.h>

/**
* main - mai en tery point
* @argc: param 1
* @argv: param 2
* Return: Always 0 Success
*/
int main(int argc, char *argv[])
{
int byte, j;
char *array;
if (argc != 2)
{
printf("Error\n");
exit(1);
}

byte = atoi(argv[1]);

if (byte < 0)
{
printf("Error\n");
exit(2);
}

array = (char *)main;

for (j = 0; j < byte; j++)
{
if (j == byte - 1)
{
printf("%02hhx\n", array[j]);
break;
}
printf("%02hhx ", array[j]);
}
return (0);
}
