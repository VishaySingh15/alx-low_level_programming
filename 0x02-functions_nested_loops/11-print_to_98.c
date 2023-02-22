#include <stdio.h>
/**
 * print_to_98 - prints all numbers till 98
 *
 * @num: integer
 */
void print_to_98(int num)
{
	if (num > 98)
	{
		while (num >= 98)
		{
			if (num == 98)
			{
				printf("%d", num);
			}
			else
			{
				printf("%d, ", num);
			}
			num--;
		}
	}
	else
	{
		while (num <= 98)
		{
			if (num == 98)
			{
				printf("%d", num);
			}
			else
			{
				printf("%d, ", num);
			}
			num++;
		}
	}
	putchar('\n');
}
