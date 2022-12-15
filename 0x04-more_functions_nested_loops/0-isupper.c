#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry point
 * @c: integer to be passed
 * Return: is upper or lower
 */
int _isupper(int c)
{
	if (c < 'A' || c > 'Z')
		return 0
	else
		return 1
		
}
