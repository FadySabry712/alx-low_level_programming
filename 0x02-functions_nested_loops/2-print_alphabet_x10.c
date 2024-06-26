#include "main.h"

/**
* print_alphabet_x10 - print alphabet ten times
*
* Return:void
*/

void print_alphabet_x10(void)
{
char ch;

int i;

fot ( i = 0; i < 10; i++)
{
ch = 'a';
while ( ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
}
