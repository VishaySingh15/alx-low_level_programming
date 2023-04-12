#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads text from a file
 * @filename: name of text file
 * @letter: number of letters to read
 * Return: number of letters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int my_file;
	char *buffer;
	ssize_t nread, nwrite;

	if (!filename)
	{
		return (0);
	}
	my_file = open(filename, O_RDONLY);
	if (my_file < 0)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}
	nread = read(myfile, buffer, letters);
	if (nread < 0)
	{
		return (0);
	}
	nwrite = write(STDOUT_FILENO, buffer, nread);
	if (nwrite < 0)
	{
		return (0);
	}
	close(my_file);
	free(buffer);
	return (nwrite);
}
