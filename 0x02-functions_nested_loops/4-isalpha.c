#include <stdio.h>
#include <ctype.h>

/**
 * checkLower - check if a character is lower
 *
 * Return 0 for Upper
 * Return 1 for lower
 */

void checkLower(char letter)
{
	if (isalpha(letter) == 0)
		return(0);
	else
		return(1);
}
