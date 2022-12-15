#include "main.h"

/**
 * print_most_numbers - print the gretest number
 *
 * Return: Nothing
 *
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf(" FizzBuzz");
		else if (i % 3 = 0)
			printf(" Fizz");
		else if (i % 5 = 0)
			printf(" Buzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
}
