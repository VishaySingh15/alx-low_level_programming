#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the program name
 * @argc: Number of arguments
 * @argv: array of pointers for arguments
 * Return: 0 Success
 */

int main(int argc  __attribute__((unused)), char **argv)
{
	int count = argc;

	printf("%s\n", *argv++);
	return (0);
}
