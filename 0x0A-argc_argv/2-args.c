#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments
 * @argc: Number of arguments
 * @argv: array of pointers for arguments
 * Return: 0 Success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
