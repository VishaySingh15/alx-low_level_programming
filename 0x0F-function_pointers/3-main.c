#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs an operation on 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	int a, b, (*func)(int x, int y), result;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);
	if ((*s == '/' || *s == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(s);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
