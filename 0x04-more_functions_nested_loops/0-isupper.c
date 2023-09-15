#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks if a character is Uppercase.
 * @c:  char argument to test
 * Description: Checks if a character is uppercase
 *
 * Return: 1 if upper, else 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
