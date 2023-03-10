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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
