#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: Number to check
 *
 * Return: 1 if n is a prime number, otherwise 0
 */

{
	if (n <= 1)
		return 0;

	return check_prime(n, 2);
}

/**
 * Check_prime - Helper function to check if a number is prime
 * @n: Number to check
 * @i: The current divisor to check
 *
 * Return: 1 if n is a prime number, otherwise 0
 */

{
	if (i == n)
		return 1;

	if (n % i == 0)
		return 0;

	return check_prime(n, i + 1);
}
