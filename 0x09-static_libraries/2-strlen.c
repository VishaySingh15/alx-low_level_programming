#include "main.h"

/**
 * _strlen - Determines the length of a string
 * @s: Pointer of string
 * Return: len - length of the string
 */

int _strlen(char *s)
{
	int ex = 0, len = 0;

	while (ex == 0)
	{
		if (*(s + len) == 0)
		{
			ex = 1;
		}
		else
		{
			len++;
		}
	}

	return (len);
}
