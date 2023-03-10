#include "main.h"

/**
 * print_array - Prints the n number of elements of an array
 * @a: Int pointer
 * @n: Number of elements to print
 * Return: no return
 */

void print_array(int *a, int n)
{
	int count = 0;

	if (n > 0)
	{
		printf("%d", *(a + count));
		count++;
		while (count < n)
		{
			printf(", %d", *(a + count));
			count++;
		}
	}
	putchar('\n');
}
