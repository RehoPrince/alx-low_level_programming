#include<unistd.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Description: Prints a quote without using standard lib
 * Return: 1 error.
*/

int main(void)
{
	write(1,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	59);

	return (1);
}
