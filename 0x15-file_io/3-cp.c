#include "main.h"
#include <stdio.h>

/**
 * main - copies contents from file 1
 * to file 2
 * @argc: number of arguments passed
 * @argv: arrays of pointers to arguments
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	/*
	int file_from, file_to, letters;
	const char *buffer = malloc(sizeof(char) * 1024);
	ssize_t nread, nwrite;
	*/
	printf("%s%d\n", "Number of arguments :", argc);
	printf("%s", argv[1]);
	/*
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit (97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", argv[1]);
		exit (98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", argv[2]);
		exit (99);
	}
	nread = read(file_from, buffer, 1024);
	if (nread < 0)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", argv[1]);
		exit (98);
	}
	nwrite = write(argv[2], buffer, nread);
	if (nwrite < 0)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", argv[2]);
		exit (99);
	}
	while (nread)
	{
		nread = read(file_from, buffer, 1024);
		nwrite = write(argv[2], buffer, nread);
	}
	close(file_from);
	close(file_to);
	*/
	return (0);
}
