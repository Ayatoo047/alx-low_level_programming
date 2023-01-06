#include "main.h"
#include <string.h>
/**
 * _strlen - returns the lenght
 * @s: the parameter
 * Return: always 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
