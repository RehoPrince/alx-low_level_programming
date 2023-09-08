#include<unistd.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Prints a quote without using standard lib
 * 
 * Return: 1 error.
*/

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, strlen(quote));
	return (1);
}
