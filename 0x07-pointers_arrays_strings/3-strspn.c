#include "main.h"

/**
 * _strspn - Returns the length of a prefix substring
 * @s: String pointer for string
 * @accept: chars to accept
 * Return: int - substring prefix
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
