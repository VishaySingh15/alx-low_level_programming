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

	if (a < 0)
	{
		a = a % -10;
		_putchar(-a + 48);
		return (-a);
	}
	a = a % 10;
	_putchar(a + 48);
	return (a);
}
