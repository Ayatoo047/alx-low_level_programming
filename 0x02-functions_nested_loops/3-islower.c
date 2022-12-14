#include "main.h"
#include <ctype.h>

/**
 * _islower - check if a character is lower
 * @c: the chracter
 *
 * Return: 0 for Upper Return 1 for lower
 */

int _islower(char c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
