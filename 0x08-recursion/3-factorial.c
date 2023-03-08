#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String pointer
 * Return: no return
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
