#include "main.h"

/**
 * _strncat - Appends n characters from src to dest
 * @dest: String pointer for destination
 * @src: String pointer for source
 * @n: Number of characters to append from src
 * Return: dest - string pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0, len_src = 0;

	while (*(dest + len_dest) != 0)
	{
		len_dest++;
	}
	while (*(src + len_src) != 0 && len_src < n)
	{
		*(dest + len_dest) = *(src + len_src);
		len_dest++;
		len_src++;
	}
	*(dest + len_dest) = 0;
	return (dest);
}
