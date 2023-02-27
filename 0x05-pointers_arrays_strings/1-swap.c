#include "main.h"

/**
 * reset_to_98 - Changes a pointer value
 * @n: Pointer int
 * Return: no return
 */

void swap_int(int *a, int*b)
{
	int temp;
	temp=*a;
	*a = *b;
	*b = temp;
}
