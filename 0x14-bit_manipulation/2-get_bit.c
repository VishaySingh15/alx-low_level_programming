#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - gets bit at position index
 * @n: int 
 * @ index: bit position
 * Return: bit at position index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return((n >> index) & 1);
}
