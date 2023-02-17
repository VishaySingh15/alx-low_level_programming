#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'This program outputs the alphabet without letters q and e
 * high or lower than 5'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
		{

		}
		else
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
