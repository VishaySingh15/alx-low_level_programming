#include "main.h"

/**
 * _strchr - Copies n bytes from src to dest
 * @s: String pointer for string
 * @c: char to find
 * Return: dest - string pointer to source
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	while (*(s + count) != 0)
	{
		if (*(s + count) == c)
		{
			return (s + count);
		}
		count++;
	}
	if (*(s + count) == c)
	{
		return (s + count);
	}
	return ('\0');
}
