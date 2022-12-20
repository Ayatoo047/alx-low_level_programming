#include "main.h"
#include <stdio.h>
/**
 * print_rev - to print in reverse order
 * @s: pointer to  int
 *
 * Return: Always return 0.
 */
void puts2(char *str)
{
	int i;
	char *s;

	s = str;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		putchar (s[i]);
	}
	putchar ('\n');
}
