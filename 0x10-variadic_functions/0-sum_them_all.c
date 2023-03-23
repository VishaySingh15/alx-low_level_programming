#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - performs an operation on 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = n; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
