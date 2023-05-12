#include "main.h"

/**
 * _isdigit - determines of a character is a digit
 * @c: third integer
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
