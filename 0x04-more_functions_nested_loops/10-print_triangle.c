#include "main.h"

/**
 * print_triangle - Prints a square using #
 * @size: size of triangle
 * Return: No Return values
 */

void print_triangle(int size)
{
	int c, count, hash = 1;
	
	while (size > 0)
	{
		c = size - 1;
		for (count = 0; count < c; count++)
		{
			_putchar(' ');
		}
		for (count = 0; count < hash; count++)
		{
			_putchar('#');
		}
		hash++;
		size--;
	}
}
