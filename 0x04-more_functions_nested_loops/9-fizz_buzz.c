#include "main.h"

/**
 * main - Fizz Buzz
 * Return: 0 for scuss
 *
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	print("\n");

	return (0);
}
