#include "main.h"
#include <stdio.h>

/**
 * main - Prints numbers 1 to 100 and fizz if
 * multiple of 3, buzz if multiple of 5 and
 * fizzbuzz if multiple of 3 and 5
 * Return: 0 success
 */

int main(void)
{
	int count = 1;
	char three[] = "Fizz", five[] = "Buzz", both[] = "FizzBuzz";
	
	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf('%s', both);
		}
		else if (count % 3 == 0)
		{
			printf('%s', three);
		}
		else if (count % 5 == 0)
		{
			printf('%s', five);
		}
		else
		{
			printf("%d", count);
		}
		putchar(' ');
		count++;
	}
	return (0);
}
