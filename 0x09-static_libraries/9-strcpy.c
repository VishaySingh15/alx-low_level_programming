#include "main.h"

/**
 * _strcpy - Copies string from source pointer to a destination pointer
 * @dest: String pointer for destination
 * @src: String pointer for source
 * Return: dest - string pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != 0)
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = 0;
	return (dest);
}
