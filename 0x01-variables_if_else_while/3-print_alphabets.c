#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints the letters in the alphabet.
 * First in lowercase, then in uppercase
 *
 * Return: Always O (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);


	putchar('\n');
	return (0);
}
