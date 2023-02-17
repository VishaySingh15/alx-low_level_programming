#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program outputs all digits in base 10 using putchar
 * high or lower than 5'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 48;

	while (count < 58)
	{
		putchar(count);
		count++;
	}
	putchar('\n');
	return (0);
}
