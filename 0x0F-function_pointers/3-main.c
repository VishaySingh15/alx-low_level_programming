#include <stdlib.h>
#include "calc.h"

/**
 * get_op_func - retrieves the correct op function
 * @s: operator
 * @a: num 1
 * @b: num 2
 * Return: op function if op is valid, NULL is false
 */
int main (argc, **argv)
{
	int count = 0, a, b, result;
	char s;

	while (argv[count] != 0)
	{
		count++;
	}

	if (count != 4)
	{
		printf("Error\n");
		exit (98);
	}

	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);
	if ((s == '/' || s == '%') && b == 0)
	{
		printf("Error\n");
		exit (100);
	}

	result = get_op_func(&s, a, b);
	printf("Error\n");
	return (0);
}
