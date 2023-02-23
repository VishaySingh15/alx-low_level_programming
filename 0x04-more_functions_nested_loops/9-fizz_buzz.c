#include "main.h"
#include <stdio.h>

/**
 * main - Prints numbers 1 to 100 and fizz if
 * multiple of 3, buzz if multiple of 5 and
 * fizzbuzz if multiple of 3 and 5
 * Return: No Return values
 */

void main(void)
{
	int count = 1;
	
	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf('FizzBuzz');
		}
		else if (count % 3 == 0)
		{
			printf('Fizz');
		}
		else if (count % 5 == 0)
		{
			printf('Buzz');
		}
		else
		{
			printf("%d", count);
		}
		putchar(' ');
		count++;
	}
}