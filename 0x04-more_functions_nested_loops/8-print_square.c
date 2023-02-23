#include "main.h"

/**
 * print_square - Prints a square using #
 * @size: size of square
 * Return: No Return values
 */

void print_square(int size)
{
	int c, count;

	c = size;
	while (size > 0)
	{
		for (count = 0; count < c; count++)
		{
			_putchar('#');
		}
		_putchar('\n');
		size--;
	}
}
