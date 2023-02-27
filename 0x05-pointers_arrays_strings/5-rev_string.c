#include "main.h"

/**
 * rev_string - Reverses the string
 * @s: String pointer
 * Return: no return
 */

void rev_string(char *s)
{
	int len = 0, count;
	char temp;

	while (*(s + len) != 0)
	{
		len++;
	}
	len--;
	count = 0;
	while (count < len / 2)
	{
		temp = *(s + len);
		*(s + len) = *(s + count);
		*(s + count) = temp;
		len--;
		count++;
	}
}
