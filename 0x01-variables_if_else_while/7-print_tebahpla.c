#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints the letters in the alphabet.
 * in reverse from 'z' to 'a'
 *
 * Return: Always O (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
