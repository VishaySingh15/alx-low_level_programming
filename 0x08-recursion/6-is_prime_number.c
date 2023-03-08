#include "main.h"

/**
 * _mod - Checks if number is prime
 * @n: Integer
 * @factor: factor of number
 * Return: 1 if prime or 0 if not
 */

int _mod(int n, int factor)
{
	if (n % factor == 0 && factor != n)
	{
		return (0);
	}
	if (countor == n)
	{
		return (1);
	}
	return(0 + _mod(n, countor + 1));
}

/**
 * is_prime_number - Returns if number is prime
 * @n: Number
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 2)
	{
		return (0);
	}
	else
	{
		return (_mod(n, 2));
	}
}
