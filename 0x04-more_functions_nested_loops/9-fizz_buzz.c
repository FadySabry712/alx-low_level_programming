#include <stdio.h>

/**
 * main - prints no from 1-100 * 3
 * Return: 0
 */

int main(void)
{
int no;

for (no = 1; no <= 100; no++)
{
if ((no % 3) == 0 && (no % 5) == 0)
{
	printf("FizzBuzz");
}
else if ((no % 3) == 0)
{
	printf("Fizz");
}
else if ((no % 5) == 0)
{
	printf("Buzz");
}
else

printf("%d", no);

if (no == 100)
{
	continue;
}
	printf(" ");
	
}
printf("\n");
return (0);
}
