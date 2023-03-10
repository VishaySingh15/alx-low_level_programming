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
	int a, b, prod;
	if (argc == 2)
	{
		a = *argv[1];
		b = *argv[2];
		prod = a * b;
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
