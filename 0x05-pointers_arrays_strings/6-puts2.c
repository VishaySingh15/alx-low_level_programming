#include "main.h"

/**
 * puts2 - Prints ever other letter
 * @s: String pointer
 * Return: no return
 */

void puts2(char *s)
{
	int len = 0, count = 0;

	while (*(s + len) != 0)
	{
		len++;
	}
	while (count < len)
	{
		_putchar(*(s + count));
		count += 2;
	}
	_putchar('\n');
}
