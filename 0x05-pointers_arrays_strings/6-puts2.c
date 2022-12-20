#include "main.h"
#include <stdio.h>
/**
 * puts2 - to print 
 *  @str: pointer to  int
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
