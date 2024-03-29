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
	unsigned int power = 1, index_dup = index;

	while (index_dup)
	{
		power *= 2;
		index_dup--;
	}
	*n = *n + power;
	return (1);
}
