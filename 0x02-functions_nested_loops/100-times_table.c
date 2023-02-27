#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void print_times_table(int n)
{
	int num = 0, num2, result, dig;
	if (n >= 0 && n <= 15)
	{
		while (num <= n)
		{
			num2 = 0;
			while (num2 <= n)
			{
				result = num * num2;
				dig = result / 10;
				if (dig > 10)
				{
					dig = dig / 10;
					_putchar(dig + 48);
					dig = dig % 10;
					_putchar(dig + 48);
				}
				else if (dig > 0)
				{
					_putchar(dig + 48);
				}
				dig = result % 10;
				_putchar(dig + 48);
				num2++;
				if (num2 != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
			num++;
		}
		_putchar('\n');
	}
}
