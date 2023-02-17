#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program outputs base 10 digits separated by a comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	while (num)
	{
		putchar(num);
		if (num == 57)
		{
			return (0);
		}
		else
		{
			putchar(44);
			putchar(32);
			num++;
		}
	}

	return (0);
}
