#include "main.h"

/**
 * _strncpy - Copies n characters from src to dest
 * @s: String pointer
 * Return: no return
 */

char *string_toupper(char *s)
{
	int len_s = 0;

	while (*(src + len_s) != 0)
	{
		if (*(src + len_s) >= 97 && *(src + len_s) <= 122)
		{
			*(src + len_s) -= 32;
		}
		len_s++;
	}
}
