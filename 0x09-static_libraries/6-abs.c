#include "main.h"

/**
 * _abs - returns the absolute value of an integer
 *
 * @a: integer
 *
 * Return: absolute value of the integer
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
	}
	return (a);
}
