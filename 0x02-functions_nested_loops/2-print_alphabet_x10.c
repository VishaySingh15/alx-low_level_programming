#include "main.h"
/* more headers goes there */

/* This program prints the word _putchar */
void print_alphabet_x10(void)
{
	int count = 0, alpha;

	while(count < 10)
	{
		alpha = 97;
		while(alpha < 123)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
