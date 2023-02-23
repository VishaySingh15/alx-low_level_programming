#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: Length of line
 * Return: No Return values
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
