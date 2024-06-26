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

for (i = 0; i < 10; i++)
{

while (ch <= 'z')
{
_putchar(ch);
ch++;
}
}
_putchar('\n');

}
