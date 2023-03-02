#include "main.h"
#include "stdio.h"

/**
 * print_alphabet - printing all alphabets in lower case
 * Return 0
 */

void print_alphabet(void)
{
	char lowercaseAlpha;

	for (lowercaseAlpha = 'a'; lowercaseAlpha <= 'z'; lowercaseAlpha++)
		_putchar(lowercaseAlpha);

	_putchar('\n');
}

