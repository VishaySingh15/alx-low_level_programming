#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14 10 times
 * Return: No Return values
 */

void more_numbers(void)
{
	int c = 0, num, num2, limit = 9;

	while (c < 10)
	{
		num2 = 0;
		while (num2 < 2)
		{
			num = 0;
			if (num2 == 1)
			{
				limit = 4
			}
			while (num <= limit)
			{
				if (num2 == 1)
				{
					_putchar(49);
				}
				_putchar(num);
				num++;
			}
			num2++;
		}
		_putchar('\n');
		c++;
	}
}
