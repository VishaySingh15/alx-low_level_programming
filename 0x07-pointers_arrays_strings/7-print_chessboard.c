#include "main.h"

/**
 * _strpbrk - Checks for first occurence of byte
 * @s: String pointer for string
 * @accept: bytes to accept
 * Return: s - string pointer
 */

void print_chessboard(char (*a)[8])
{
	int count = 0;

	while (*(s + count) != 0)
	{
		count1 = 0;
		while (*(accept + count1) != 0)
		{
			if (*(s + count) == *(accept + count1))
			{
				return (s + count);
			}
			count1++;
		}
		count++;
	}
	return (NULL);
}
