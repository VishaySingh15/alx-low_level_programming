#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - retrieves the correct op function
 * @s: operator
 * @a: num 1
 * @b: num 2
 * Return: op function if op is valid, NULL is false
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (ops[i].op == s)
		{
			return ((ops[i].f)(a, b));
		}
		i++;
	}
	return (NULL);
}
