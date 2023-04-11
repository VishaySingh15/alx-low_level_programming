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
	int diff = n ^ m, power = 1;
	unsigned int n_bits = 0;

	if (diff < 0)
	{
		diff = -diff;
	}
	while (power < diff)
	{
		power *= 2;
	}
	while (diff)
	{
		if (diff >= power)
		{
			diff -= power;
			n_bits++;
		}
		power /= 2;
	}
	return (n_bits);
}
