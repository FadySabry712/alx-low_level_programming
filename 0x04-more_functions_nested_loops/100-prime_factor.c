#include <stdio.h>

/**
 * main - function main
 * Return: 0
 */

int main(void)
{
long pr = 612852475143, div;

while (div < (pr / 2))
{
if ((pr % 2) == 0)
{
pr /= 2;
continue;
}

for (div = 3; div < (pr / 2); div += 2)
{
if ((pr % div) == 0)
{
pr /= div;
}
}
}
printf("%ld\n", pr);

return (0);
}
