#include "main.h"
#include <ctype.h>

int _isdigit(int c)
{
	if (c < 0)
		return (0);
	else if (c >= 0 && c <= 9)
		return (0);
}
