#include "main.h"
/**
 * jack_bauer - prints all minutes of the day
 */
void jack_bauer(void)
{
	int hour1 = 0, hour2 = 0, hour2_lim = 9, min1 = 0;
	int min1_lim = 5, min2 = 0, min2_lim = 9;

	while (hour1 <= 2)
	{
		if (hour1 == 2)
		{
			hour2_lim = 3;
		}
		hour2 = 0;
		while (hour2 <= hour2_lim)
		{
			min1 = 0;
			while (min1 <= min1_lim)
			{
				min2 = 0;
				while (min2 <= min2_lim)
				{
					_putchar(hour1 + 48);
					_putchar(hour2 + 48);
					_putchar(58);
					_putchar(min1 + 48);
					_putchar(min2 + 48);
					_putchar('\n');
					min2++;
				}
				min1++;
			}
			hour2++;
		}
		hour1++;
	}
}
