#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * clear_bit - clears bit at position index
 * @n: int pointer
 * @index: bit position
 * Return: 1 if success -1 for failure
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int diff = n ^ m;
	unsigned int n_bits = 0;

	while (diff)
	{
		if (diff & 1)
		{
			n_bits++;
		}
		diff = diff >> 1;
	}
	return (n_bits);
}
