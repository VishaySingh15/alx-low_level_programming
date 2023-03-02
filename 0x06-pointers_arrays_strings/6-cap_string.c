#include "main.h"

/**
 * cap_string - Captalizes all words in a string
 * @s: String pointer
 * Return: no return
 */

char cap_string(char *s)
{
	int len_s = 0, count;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + len_s) >= 97 && *(s + len_s) <= 122)
	{
		*(s + len_s) -= 32;
	}
	while (*(s + len_s) != 0)
	{
		for (count = 0; count < 13; count++)
		{
			if (*(s + len_s) == sep_words[count])
			{
				if ((*(s + (len_s + 1)) >= 97) && (*(s + (len_s + 1)) <= 122))
				{
					*(s + (len_s + 1)) = *(s + (len_s + 1)) - 32;
				}
					
				break;
			}
		}
		len_s++;
	}
	return (s);
}
