#include "main.h"
#include <ctype.h>

/**
 * checkLower - check if a character is lower
 *
 * Return 0 for Upper
 * Return 1 for lower
 */

void checkLower(char letter)
{
	if (islower(letter) > 0)
		return(1);
	else
		return(0);
}
