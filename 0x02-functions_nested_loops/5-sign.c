#include "main.h"

/**
 * print_sign - prints the type of integer a number is.
 * @n: the type of integer to be printed.
 * Return: 1 if number in n is greater than zero
 * 0 if the number is equal to zero
 * -1 if the number in n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
