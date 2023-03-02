#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: int pointer for array
 * @n: array length
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int n_half = 0, temp;

	while (n_half < n / 2)
	{
		temp = *(a + n_half);
		*(a + n_half) = *(a + n - n_half - 1);
		*(a + n - n_half - 1) = temp;
		n_half++;
	}
}
