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
	int a = 0, b = argc + 1, sum = 0;

	printf("%d\n", b);
	while (argc > 1)
	{
		printf("%s\n", argv[b - argc]);
		a = atoi(argv[b - argc]);
		if (a == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += a;
		argc--;
	}
	printf("%d\n", sum);
	return (0);
}
