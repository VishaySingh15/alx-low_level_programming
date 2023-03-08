#include "main.h"

/**
 * _memcpy - Copies n bytes from src to dest
 * @dest: String pointer for a destination
 * @src: String pointer for source
 * @n: Number of characters to replace
 * Return: dest - string pointer to source
 */

void _puts_recursion(char *s)
{
	int count = 0;

	if (*(s + count) == 0)
	{
		return;
	}
	_putchar(*(s + count));
	count++;
	_puts_recursion(*(s + count));
}
