#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints all arguments with separator
 * @separator: argument separator
 * @n: number of arguments
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;

	va_start(arg_list, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator)
		{
			printf("%s%s", va_arg(arg_list, char), separator);
		}
		else
		{
			printf("%s", va_arg(arg_list, char));
		}
	}
	printf("%s\n", va_arg(arg_list, int));
	va_end(arg_list);
}
