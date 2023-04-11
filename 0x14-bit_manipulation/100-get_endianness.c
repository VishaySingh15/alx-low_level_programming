#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *y = (char*)&x;

	return ((int)*y);
}
