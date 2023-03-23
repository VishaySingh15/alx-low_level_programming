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
	char *str;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_list, char *);
	
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator)
		{
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(arg_list);
}
