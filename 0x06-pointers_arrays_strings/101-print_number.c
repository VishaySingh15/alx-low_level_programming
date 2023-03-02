#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @s: String pointer
 * Return: S - Encoded string
 */

void print_number(int n)
{
	int rem, rev = 0, mod = 10, neg = 1;
	
	if (n < 0)
	{
		_putchar('-');
		mod = -10;
		neg = -1;
	}
	else if (n == 0)
	{
		_putchar(48);
	}
	while (n != 0)
	{
		rem = n % mod;
		_putchar(rem + 48);
		rev = rev * 10 + rem;
		n = (n / mod) * neg;
	}
}
