#include "main.h"
/**
 * print_to_98 - prints all numbers till 98
 *
 * @num: integer
 *
 *
 */
void print_to_98(int num)
{
	int digits[] = {0,0,0,0,0};
	int arr_count, slash, mod;
	
	if (num >= 98)
	{
		while (num >= 98)
		{
			arr_count = 0;
			mod = num % 10;
			digits[arr_count] = mod;
			slash = num / 10;
			while (slash > 0)
			{
				mod = slash % 10;
				arr_count++;
				digits[arr_count] = mod;
				slash = slash / 10;
			}
			while (arr_count >= 0)
			{
				_putchar(digits[arr_count] + 48);
				arr_count --;
			}
			if (num == 98)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(44);
				_putchar(32);
			}
			num--;
		}
	}
	else
	{
		while (num <= 98)
		{
			arr_count = 0;
			mod = num % 10;
			digits[arr_count] = mod;
			slash = num / 10;
			while (slash > 0)
			{
				mod = slash % 10;
				arr_count++;
				digits[arr_count] = mod;
				slash = slash / 10;
			}
			while (arr_count >= 0)
			{
				if (digits[arr_count] >= 0)
				{
					_putchar(digits[arr_count] + 48);
				}
				else
				{
					digits[arr_count] = digits[arr_count] * -1;
					_putchar(digits[arr_count] + 48);
				}
				arr_count--;
			}
			if (num == 98)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(44);
				_putchar(32);
			}
			num++;
		}
	}
}
