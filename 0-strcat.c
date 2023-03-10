#include "main.h"

/**
 * _strcat - Copies string from source
 * pointer and appends to destination pointer
 * @dest: String pointer for destination
 * @src: String pointer for source
 * Return: dest - string pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0, len_src = 0;

	while (*(dest + len_dest) != 0)
	{
		len_dest++;
	}
	while (*(src + len_src) != 0)
	{
		*(dest + len_dest) = *(src + len_src);
		len_dest++;
		len_src++;
	}
	*(dest + len_dest) = 0;
	return (dest);
}
