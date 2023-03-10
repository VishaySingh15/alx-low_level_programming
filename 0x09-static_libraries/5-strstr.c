#include "main.h"
#include <stddef.h>

/**
 * _strstr - Checks if a substring is located in a string
 * @haystack: String pointer
 * @needle: substring to check for
 * Return: haystack - string pointer
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
				if (*(needle + count_needle) == *(haystack + count + count_needle))
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
