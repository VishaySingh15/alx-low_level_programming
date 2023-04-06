#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts binary to int
 * @b: binary string pointer
 * Return: decimal if valid else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, len = 0;

	if (!b)
	{
		return (0);
	}
	while (b[len] != 0)
	{
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}
		len++;
	}
	len--;
	while (len >= 0)
	{
		if (b[len] == '1')
		{
			dec += 2**len;
		}
		len--;
	}
	return (dec)
}
