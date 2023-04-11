#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit - sets bit at position index
 * @n: int pointer
 * @index: bit position
 * Return: 1 if success -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 0, valid, power = 1, index_dup = index;

	valid = *n;
	while (valid)
	{
		count++;
		valid = valid >> 1;
	}
	while (index_dup)
	{
		power *= 2;
		index_dup--;
	}
	if (index < count)
	{
		*n = *n + power;
		return (1);
	}
	return (-1);
}
