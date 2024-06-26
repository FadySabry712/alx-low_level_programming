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

ch = 'a';
i = 0;

while (i < 10)
{

while (ch <= 'z')
{
_putchar(ch);
ch++;
}
}
_putchar('\n');

}
