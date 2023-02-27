#include "main.h"

/**
 * puts_half - Prints second half of a string
 * @s: String pointer
 * Return: no return
 */

void puts_half(char *s)
{
	int len = 0, half;

	while (*(s + len) != 0)
	{
		len++;
	}
	if ( len % 2)
	{
		half = len / 2 + 1;
	}
	else
	{
		half = len / 2;
	}
	while (half < len)
	{
		_putchar(*(s + half));
		half++;
	}
	_putchar('\n');
}
