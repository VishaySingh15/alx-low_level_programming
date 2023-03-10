#include "main.h"

/**
 * _isupper - determines of a character is uppercase
 * @c: third integer
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
