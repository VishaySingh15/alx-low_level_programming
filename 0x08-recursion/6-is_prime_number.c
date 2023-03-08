#include "main.h"

int _mod(int n, int count)
{
	if (n % count == 0 )
	{
		return (0);
	}
	if (count == n)
	{
		return (1);
	}
	return(0 + _mod(n, count + 1));
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String pointer
 * Return: no return
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
