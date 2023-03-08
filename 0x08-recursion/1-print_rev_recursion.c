#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: String pointer
 * Return: no return
 */

void _print_rev_recursion(char *s)
{
	int count = 0;

	if (*(s + count) == 0)
	{
		return;
	}
	count++;
	_putchar(_print_rev_recursion((s + count));	
}
