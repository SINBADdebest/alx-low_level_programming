#include "main.h"


/**
 * print_last_digit - print the last digit of any number stated
 * @z: the value
 * Returns: the value of the last digit
 */
int print_last_digit(int z)
{
	int last_d = z % 10;

	if (last_d < 0)
		last_d *= -1;

	_putchar(last_d + '0');

	return (0);
}
