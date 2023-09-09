#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prints the digits of base 10
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	printf("\n");
	return (0);
}
