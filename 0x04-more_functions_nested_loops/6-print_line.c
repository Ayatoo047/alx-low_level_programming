#include "main.h"

/**
 * print_lines - function that draw straight line i
 *@n: parameter passed
 *
 */

void print_line(int n)
{
	int j;

	for (i = 1; j <= n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
