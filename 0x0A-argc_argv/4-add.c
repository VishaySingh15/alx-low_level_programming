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
	int a = 0, b = argc, sum = 0;

	while (argc > 1)
	{
		argc--;
		a = atoi(argv[b - argc]);
		if (a <= 0 && *argv[b - argc] != 48)
		{
			printf("Error\n");
			return (1);
		}
		sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
