#include "main.h"

/**
 * swap_int - Swaps 2 integers
 * @a: Pointer int 1
 * @b: Pointer int 2
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
