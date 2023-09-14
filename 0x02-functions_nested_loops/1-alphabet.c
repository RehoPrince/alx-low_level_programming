#include "main.h"

/**
 * print_alphabet - Alphabet print function
 *
 * Description: prints the alphabet in lowercase
 * using putchar prototype
 *
 *
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

}
