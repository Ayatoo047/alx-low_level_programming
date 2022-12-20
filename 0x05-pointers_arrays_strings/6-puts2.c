#include "main.h"
#include <stdio.h>
/**
 * print_rev - to print in reverse order
 * @s: pointer to  int
 *
 * Return: Always return 0.
 */
void print_rev(char *s)
{
	int i;
	char *str;

	str = s;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		putchar (str[i]);
	}
	putchar ('\n');
}
