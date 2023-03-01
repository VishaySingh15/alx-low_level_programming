#include "main.h"

/**
 * _strcmp - Copies n characters from src to dest
 * @s1: String 1 pointer
 * @src: String 2 pointer
 * Return: -15 - for s1 > s2, 15 for s2 > s1, 0 for s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0;

	while (*(s1 + len_s1) != 0)
	{
		len_s1++;
	}
	while (*(s2 + len_s2) != 0)
	{
		len_s2++;
	}
	if (len_s1 > len_s2)
	{
		return (-15);
	}
	else if (len_s1 < len_s2)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
