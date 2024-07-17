#include <stdio.h>

/**
 * main - entery point
 * @argc: param 1 int
 * @@argv: param 2 list
 * Return: 0 Sucess
 */

int main(int argc, char const *argv[])
{
int num = 0;

while (argc--)
{
printf("%s\n", argv[num]);
num++;
}
return (0);
}
