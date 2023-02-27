#include "main.h"

/**
 * _puts - Prints a string
 * @str: String pointer
 * Return: no return
 */

void print_rev(char *s)
{
	int len = 0;

	while (*(str + len) != 0)
	{
		len++;
	}
	while (len >= 0)
	{
		len--;
		_putchar(*(s + len));
	}
	_putchar('\n');
}
