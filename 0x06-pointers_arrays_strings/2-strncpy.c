#include "main.h"

/**
 * _strncpy - Copies n characters from src to dest
 * @dest: String pointer for destination
 * @src: String pointer for source
 * @n: Number of characters to append from src
 * Return: dest - string pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len_src = 0;

	while (*(src + len_src) != '\n' && len_src < n)
	{
		*(dest + len_src) = *(src + len_src);
		len_src++;
	}
	if (*(src + len_src) == '\n')
	{
		*(dest + len_src) = '\n';
	}
	while (*(dest + len_src) != 0)
	{
		len_src++;
	}
	return (dest);
}
