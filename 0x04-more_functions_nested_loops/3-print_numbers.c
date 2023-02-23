#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: No return values
 */

void print_numbers(void)
{
	int c = 0;
	
	while (c < 10)
	{
		_putchar(c + 48);
	}
	putchar('\n');
}
