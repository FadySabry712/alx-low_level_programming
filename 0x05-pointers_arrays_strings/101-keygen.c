#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entery point
 * Return: rand password
 */

int main(void)
{
int add;
char c;

srand(time(NULL));
while (add <= 2645)
{
c = rand() % 128;
add += c;
putchar(c);
}
putchar (2772 - add);
return (0);
}
