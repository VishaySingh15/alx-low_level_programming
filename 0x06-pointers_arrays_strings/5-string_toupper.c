#include "main.h"

/**
 * _string_toupper - Capitlaises all lower case letters
 * @s: String pointer
 * Return: no return
 */

char *string_toupper(char *s)
{
	int len_s = 0;

	while (*(s + len_s) != 0)
	{
		if (*(s + len_s) >= 97 && *(s + len_s) <= 122)
		{
			*(s + len_s) -= 32;
		}
		len_s++;
	}
	return (s);
}
