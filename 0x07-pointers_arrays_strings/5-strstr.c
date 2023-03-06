#include "main.h"

/**
 * _strpbrk - Checks for first occurence of byte
 * @s: String pointer for string
 * @accept: bytes to accept
 * Return: s - string pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0, count1, count_needle;

	while (*(haystack + count) != 0)
	{
		count1 = 0;
		count_needle = 0;
		if (*needle == *(haystack + count))
		{
			count1++;
			count_needle++;
			while (*(needle + count_needle) != 0)
			{
				if (*needle == *(haystack + count))
				{
					count1++;
				}
				count_needle++;
			}
			if (count1 == count_needle)
			{
				return (haystack + count);
			}
		}
		count++;
	}
	return (NULL);
}
