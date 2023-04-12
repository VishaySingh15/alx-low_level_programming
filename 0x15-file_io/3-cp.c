#include "main.h"

/**
 * append_text_to_file - adds text to end
 * of file
 * @filename: name of text file
 * @text_content: content to write to file
 * Return: 1 if success, -1 if failure
 */
int main (int argc, char **argv)
{
	int my_file, letters;
	ssize_t nwrite;

	if (!filename)
	{
		return (-1);
	}
	my_file = open(filename, O_APPEND | O_WRONLY);
	if (my_file < 0)
	{
		return (-1);
	}
	for (letters = 0; text_content[letters] != 0; letters++)
		;
	if (letters == 0)
	{
		text_content = "";
	}
	nwrite = write(my_file, text_content, letters);
	if (nwrite < 0)
	{
		return (-1);
	}
	close(my_file);
	return (1);
}
