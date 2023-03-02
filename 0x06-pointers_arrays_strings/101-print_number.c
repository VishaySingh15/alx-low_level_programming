#include "main.h"

/**
 * print_number - prints a number
 * @n: Number 
 * Return: no return
 */

void print_number(int n)
{
	int rem, rev = 0, mod = 10;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	else if (n == 0)
	{
		_putchar(48);
	}
	while (n != 0)
	{
		rem = n % mod;
		rev = rev * 10 + rem;
		n = (n / mod);
	}
	while (rev > 0)
	{
		rem = rev % mod;
		_putchar(rem + 48);
		rev = (rev / mod);
	}
}
