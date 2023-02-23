#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 to 9 except 2 and 4
 * Return: No Return values
 */

void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != 2 && c !=4)
		{
			_putchar(c + 48);
		}
		c++;
	}
	_putchar('\n');
}
