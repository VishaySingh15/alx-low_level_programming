#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String pointer
 * Return: no return
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x ,y - 1));
	}
}
