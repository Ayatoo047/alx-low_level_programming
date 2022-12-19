#include "main.h"
/**
 * print_rev - print reverse
 *
 * @s: the parameter
 * Return: always 0
 */

void print_rev(char *s)
{
	int i;

	for (i < strlen(&s); i <= 0; i--)
	{
		_putchar("%s", s[i]);
	}
	_putchar('\n');
}
