#include "main.h"

/**
 * print_alphabet_x10 - prints the word _putchar 10 times
 */
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
