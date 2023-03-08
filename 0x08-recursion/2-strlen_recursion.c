#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: String pointer
 * Return: no return
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == 0)
	{
		return (0);
	}
	else
	{
		count++; 
		_strlen_recursion(s + 1);
	}
	return (count);
}
