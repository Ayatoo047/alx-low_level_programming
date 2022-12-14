#include "main.h"
#include <ctype.h>

/**
 * checkLower - check if a character is lower
 *
 * Return 0 for Upper
 * Return 1 for lower
 */

int checkLower(char c)
{
	if (islower(c) > 0)
		return(1);
	else
		return(0);
}
