#include "main.h"

/**
 * _strchr - Copies n bytes from src to dest
 * @s: String pointer for string
 * @c: char to find
 * Return: dest - string pointer to source
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, count1 = 0;

	while (*(accept + count1) != 0)
	{
		count = 0;
		while (*(s + count) != 0)
		{
			if (*(s + count) == *(accept + count1))
			{
				return (count + 1);
			}
			count++;
		}
		count1++;
	}
	return (0);
}
