#include "main.h"
#include <stdio.h>

/**
 * main - prints 1 to 100 but replaces every
 * multple of 3 with 'Fizz', 5 with 'Buzz', and
 * 15 with 'FizzBizz'
 *
 * Return: 0 Always.
 */
int main(void)
{
	int i;
	int num = 101;

	for (i = 1; i < num; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d", i);
		}

	}

	printf("\n");

	return (0);
}
