#include "main.h"

/**
 * _strcmp - Copies n characters from src to dest
 * @s1: String 1 pointer
 * @s2: String 2 pointer
 * Return: -15 - for s1 > s2, 15 for s2 > s1, 0 for s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
