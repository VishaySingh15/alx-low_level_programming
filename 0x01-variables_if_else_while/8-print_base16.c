#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program outputs digits of base 16
 * high or lower than 5'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha = 48;

	while (alpha)
	{
		if (alpha == 58)
		{
			alpha = 'a';
		}
		else if (alpha == 'f')
		{
			putchar('\n');
			return (0);
		}
		putchar(alpha);
		alpha++;
	}

	return (0);
}
