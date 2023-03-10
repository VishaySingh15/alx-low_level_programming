#include "main.h"

/**
 * _islower - determines if a character is lowercase
 *
 * @c: Character in ASCII code
 *
 * Return: 1 If lowercase , 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
