#include "main.h"

/**
 * more_numbers - print the table of 14 in 10 places
 */
void more_numbers(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		j++;
		_putchar('\n');
	}
}
