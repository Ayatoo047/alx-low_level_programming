#include "main.h"

/**
 * print_most_numbers - print the number 1 to 9
 * except 2 and 4, then a new line
 * Return: Nothing
 */

void print_most_number(void);
{
	int i;

	for (i = 0; i >= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
