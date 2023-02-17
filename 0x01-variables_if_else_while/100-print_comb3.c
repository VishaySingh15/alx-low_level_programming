#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program outputs the all possible 
 * different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, n, reverse = 0, remainder, array_count = 0, num_length;
	int numbers[45];

	for (num = 10; num < 100; num++)
	{
		n = num;
		while (n != 0)
		{
			remainder = n % 10;
			reverse = reverse * 10 + remainder;
			n /= 10;
		}
		if (reverse < num)
		{
			numbers[array_count] = reverse;
			array_count++;
		}
		reverse = 0;
	}
	
	num_length = sizeof(numbers) / sizeof(numbers[0]);
	for (num = 0; num < num_length; num++)
	{
		for (n = 0; n < num_length - 1; n++)
		{
			if (numbers[n] > numbers[n + 1])
			{
				reverse = numbers[n];
				numbers[n] = numbers[n + 1];
				numbers [n + 1] = reverse;
			}
		}
	}

	for (num = 0; num < num_length; num++)
	{
		if (numbers[num] != 0)
		{
			putchar((numbers[num] / 10) + 48);
			putchar((numbers[num] % 10) + 48);
			if (numbers[num] == 89)
			{
				putchar('\n');
				return (0);
			}
			putchar(44);
			putchar(32);
		}
	}

	return (0);
}
