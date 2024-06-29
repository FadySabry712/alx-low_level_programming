#include <stdio.h>
/**
*main -entery point
*Return: 0
*/

int main(void)
{
char c;

char b;

c = 'a';
b = 0;

while (b < 10)
{
putchar(b + '0');
b++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
