#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints the digits of base 16.
 * using only 'putchar'
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}