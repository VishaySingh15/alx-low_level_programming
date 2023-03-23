#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all arguments with separator
 * @separator: argument separator
 * @n: number of arguments
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;
	char sep = '';

	if (*separator)
	{
		sep = *separator;
	}

	va_start(arg_list, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(arg_list, int), sep);
	}
	printf("%d\n", va_arg(arg_list, int));
	va_end(ap);
}
