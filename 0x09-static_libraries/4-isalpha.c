#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if a character is lower
 * @c: the argument
 * Return: 0 for Upper Return 1 for lower
 */

int _isalpha(char c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}
