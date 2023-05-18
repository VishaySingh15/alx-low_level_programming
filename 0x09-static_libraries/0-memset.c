#include "main.h"

/**
 * _memset - Fills first n bytes of memory with char b
 * @s: String pointer for a set
 * @b: Replacement character
 * @n: Number of characters to replace
 * Return: s - string pointer to set
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		*(s + count) = b;
		count++;
	}
	return (s);
}
