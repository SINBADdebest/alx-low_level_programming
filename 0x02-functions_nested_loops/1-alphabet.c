#include "main.h"
#include "stdio.h"

/**
 * printing all alphabets in lower case
 */

void print_alphabet(void)
{
	char lowercaseAlpha;

	for (lowercaseAlpha = 'a'; lowercaseAlpha <= 'z'; lowercaseAlpha++)
		_putchar(lowercaseAlpha);

	_putchar('\n');
}

