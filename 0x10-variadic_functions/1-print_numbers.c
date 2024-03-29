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

	va_start(arg_list, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator)
		{
			printf("%d%s", va_arg(arg_list, int), separator);
		}
		else
		{
			printf("%d", va_arg(arg_list, int));
		}
	}
	printf("%d\n", va_arg(arg_list, int));
	va_end(arg_list);
}
