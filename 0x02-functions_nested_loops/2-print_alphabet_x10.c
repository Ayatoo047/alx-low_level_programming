#include <stdio.h>

/**
 * print_alphabet - print alphabet
 *
 * Return: Always 0 for success
 */
char print_alphabet(void)
{
	char i;

	while (int i = 0; i < 10)
	{

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		i++;
	}
}
