#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c - character
 * Returns 1 if character is lower case and 0 if not
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
