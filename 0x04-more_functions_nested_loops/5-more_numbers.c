#include "main.h"

/**
* more_numbers - prints digits 0 to 14 ten times
* using _putchar
*
*/

void more_numbers(void)
{
	int i, j;
	int count = 10;

	for (i = 1; i <= count; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
	}
}
