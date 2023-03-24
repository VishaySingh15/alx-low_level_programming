#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints all arguments with separator
 * @separator: argument separator
 * @n: number of arguments
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	int count = 0, flag = 0, j;
	char *str;
	char form[] = "cifs";

	va_start(arg_list, format);
	while (format && format[count])
	{
		j = 0;
		while (form[j])
		{
			if (format[count] == form[j] && flag)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[count])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), flag = 1;
			break;
		case 's':
			str = va_arg(valist, char *), flag = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} count++;
	}
	printf("\n");
	va_end(arg_list);
}
