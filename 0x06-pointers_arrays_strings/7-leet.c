#include "main.h"

/**
 * _strncpy - Copies n characters from src to dest
 * @dest: String pointer for destination
 * @src: String pointer for source
 * @n: Number of characters to append from src
 * Return: dest - string pointer to destination
 */

char *leet(char *s)
{
	int len_s = 0, i;
	char encode[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	while (*(s + len_s) != 0)
	{
		for (i = 0; i < 10; i++)
		{
			if (*(s + len_s) == encode[i])
			{
				*(s + len_s) = replace[i] + 48;
			}
		}
		len_s++;
	}
	return (s);
}
