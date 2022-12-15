#include "main.h"

/*
 * print_square - print the gretest number
 *
 * Return: Nothing
 *
 */

void print_square(int size)
{
	if (size <= 0)
		putchar('\n')
	else
	{	for (size = size, size <= 0, size--)
		{
			for (size = size, size <= 0, size--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
