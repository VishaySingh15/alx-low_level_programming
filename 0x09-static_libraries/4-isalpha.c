#include "main.h"

/**
 * _isalpha - determines if a character is a letter
 *
 * @c: Int in ASCII code
 *
 * Return: 1 if character is a letter and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
