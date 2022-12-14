#include <stdio.h>
/**
 * add - Entry point
 *
 * @n: the fist number
 * Return: Return the result
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
			printf("%d, ", n);
		printf("\n");
	}
	else
	{
		for (n = n; n <= 98; n--)
			printf("%d, ", n);
		printf("\n");
	}
}
