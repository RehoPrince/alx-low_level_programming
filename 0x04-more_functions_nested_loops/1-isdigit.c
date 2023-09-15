#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c:  char argument to test
 *
 * Return: 1 if digit, else 0.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	return (0);
}
