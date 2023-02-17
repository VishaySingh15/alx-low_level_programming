#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program outputs the alphabet in reverse order
 * high or lower than 5'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
