#include "main.h"

/**
 * rev_string - Reverses the string
 * @s: String pointer
 * Return: no return
 */

void rev_string(char *s)
{
	int len = 0, count, len2;
	char temp;

	while (*(s + len) != 0)
	{
		len++;
	}
	len--;
	count = 0;
	len2 = len + 1;
	while (count < len2 / 2)
	{
