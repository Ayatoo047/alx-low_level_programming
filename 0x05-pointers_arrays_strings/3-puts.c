#include "main.h"
#include <stdio.h>
/**
 * _puts - function to print
 * @str: strings to print
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int m;
	char *c;

	c = str;
	for (m = 0; c[m]; m++)
	{
		putchar(c[m]);
	}

	putchar('\n');
}
