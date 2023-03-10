#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the Number of arguments
 * @argc: Number of arguments
 * @argv: array of pointers for arguments
 * Return: 0 Success
 */

int main(int argc, char **argv  __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
