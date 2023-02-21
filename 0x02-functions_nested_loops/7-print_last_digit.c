#include "main.h"
/**
 * print_last_digit - prints and returns the last digit of an integer
 *
 * @a: integer
 *
 * Return: last digit of the integer
 */
int print_last_digit(int a)
{
	int rem = 1;
	
	if (a < 0)
	{
		a = a * -1;
		while (rem > 0)
		{
			a = a % 10;
			rem = a / 10;
		}
		_putchar(a + 48);
		return (a);
	}
	while (rem > 0)
	{
		a = a % 10;
		rem = a / 10;
	}
	_putchar(a  + 48);
	return (a);
}
