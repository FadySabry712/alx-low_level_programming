#include "main.h"

/**
* _islower - chechl if a letter is lower case
*@c: the character cheked
* Return: 1 if lower case 0 if not
*/


int  _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
