#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints every combination of a digit.
 * using only 'putchar'
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
		continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
