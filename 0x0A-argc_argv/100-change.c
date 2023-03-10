#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of 2 numbers
 * @argc: Number of arguments
 * @argv: array of pointers for arguments
 * Return: 0 Success, 1 for Error
 */

int main(int argc, char **argv)
{
	int a, count = 0, coin_count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a == 0 || a < 0)
	{
		printf("0\n");
	}
	else
	{
		while (a)
		{
			if (a > coins[count])
			{
				coin_count += a / coins[count];
				a = a - coin_count * coins[count];
			}
			count++;
		}
	}
	printf("%d\n", coin_count);
	return (0);
}
