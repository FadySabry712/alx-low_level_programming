#include <stdio.h>

/**
 * main - entery point
 * Return: always 0
 */

int main(void)
{
char a;
char b;

a = 'a';
b = 'A';
while (a <= 'z')
{
putchar(a);
a++;
}
while
(b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
