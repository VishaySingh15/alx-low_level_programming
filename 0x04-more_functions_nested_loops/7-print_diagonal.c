#include "main.h"

/**
 * print_diagonal - Prints a diagonal line using \
 * @n: the number of diagonal lines to be printed
 * Return: No Return values
 */

void print_diagonal(int n)
{
	int count = 0, spaces;
	
	while (n > 0)
	{
		for (spaces = 1; spaces <= count; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		count++;
		n--;
	}
	_putchar('\n');
}
