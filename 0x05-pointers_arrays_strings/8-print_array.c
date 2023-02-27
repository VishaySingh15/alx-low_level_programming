#include "main.h"

/**
 * print_array - Prints the n number of elements of an array
 * @a: Int pointer
 * @n: Number of elements to print
 * Return: no return
 */

void print_array(int *a, int n)
{
	count = 0;

	while (count < n)
	{
		printf(*(a + count));
		count++;
	}
	_putchar('\n');
}
