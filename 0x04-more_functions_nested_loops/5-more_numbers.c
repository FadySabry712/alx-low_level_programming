# include "main.h"

/**
 * more_numbers - print any nymber 10 times
 */

void more_numbers(void)
{

	int i;
	int c;

	for (i = 0; i < 0; i++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
			}
		_putchar('\n');
	}
}
