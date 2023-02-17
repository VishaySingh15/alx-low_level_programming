#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program outputs the alphabet in lower and upper case
 * high or lower than 5'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int a = 'a';

	while (a)
	{
		putchar(a);
		if (a == 'z')
		{
			a = 'A';
		}
		else if (a == 'Z')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			a++;
		}
	}
	return (0);
}
