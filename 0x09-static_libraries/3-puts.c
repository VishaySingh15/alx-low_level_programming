#include "main.h"

/**
 * _puts - Prints a string
 * @str: String pointer
 * Return: no return
 */

void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != 0)
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
