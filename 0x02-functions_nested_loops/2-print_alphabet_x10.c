#include "main.h"

/**
 * print_alphabet_x10 - printing lower case alphabet x10
 * Return 0
 */

void print_alphabet_x10(void)
{
	int timesTen;
	char alphabet;

	for (timesTen = 0; timesTen <= 9; timesTen++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
