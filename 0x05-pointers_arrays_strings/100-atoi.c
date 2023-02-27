#include "main.h"

/**
 * _atoi - Converts a string to a number
 * @s: String pointer
 * Return: no return
 */

int _atoi(char *s)
{
	int len = 0, val = 0, sign = 0, num_over = 0;

	while (*(s + len) != 0)
	{
		if (num_over == 0)
		{
			if (*(s + len) == 45)
			{
				sign++;
			}
			else if (*(s + len) >= 48 || *(s + len) <= 57)
			{
				val += val * 10;
				val += *(s + len) - 48;
			}
			else if (val > 0)
			{
				num_over++;
			}
		}
		len++;
	}
	if (val == 0)
	{
		return (0);
	}
	else if (sign % 2 == 0)
	{
		return (val);
	}
	else
	{
		return (-val);
	}
}
