#include "main.h"

/**
 * _memcpy - Copies n bytes from src to dest
 * @dest: String pointer for a destination
 * @src: String pointer for source
 * @n: Number of characters to replace
 * Return: dest - string pointer to source
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		*(dest + count) = *(src + count);
		count++;
	}
	return (dest);
}
