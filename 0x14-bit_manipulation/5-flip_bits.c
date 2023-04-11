#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - determines how many bits
 * in n need to flip to become m
 * @n: int 1
 * @m: int 2
 * Return: number of bits to flip
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
