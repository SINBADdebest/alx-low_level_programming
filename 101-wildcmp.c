#include "main.h"

/**
 * wildcmp - Compares two strings considering * as a wildcard
 * @s1: The first string
 * @s2: Second string with wildcard *
 *
 * Return: 1 if strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return wildcmp(s1, s2 +1);
		return wildcmp(s1, s2 + 1) || wildcmp(s1 +1, s2);
	}
	if (*s1 == *s2)
		return wildcmp(s1 +1, s2 + 1);

	return 0;
}
