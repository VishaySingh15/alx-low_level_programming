#include <unistd.h>
#include "main.h"

/*
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - determines if a character is lowercase
 *
 * @c: Character in ASCII code
 *
 * Return: 1 If lowercase , 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
	}
	return (a);
}

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isdigit - determines of a character is a digit
 * @c: third integer
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int _strlen(char *s)
{
	int ex = 0, len = 0;

	while (ex == 0)
	{
		if (*(s + len) == 0)
		{
			ex = 1;
		}
		else
		{
			len++;
		}
	}

	return (len);
}

void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != 0)
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != 0)
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = 0;
	return (dest);
}

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}

char *_strcat(char *dest, char *src)
{
	int len_dest = 0, len_src = 0;

	while (*(dest + len_dest) != 0)
	{
		len_dest++;
	}
	while (*(src + len_src) != 0)
	{
		*(dest + len_dest) = *(src + len_src);
		len_dest++;
		len_src++;
	}
	*(dest + len_dest) = 0;
	return (dest);
}

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0, len_src = 0;

	while (*(dest + len_dest) != 0)
	{
		len_dest++;
	}
	while (*(src + len_src) != 0 && len_src < n)
	{
		*(dest + len_dest) = *(src + len_src);
		len_dest++;
		len_src++;
	}
	*(dest + len_dest) = 0;
	return (dest);
}

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		*(s + count) = b;
		count++;
	}
	return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		*(dest + count) = *(src + count);
		count++;
	}
	return (dest);
}

char *_strchr(char *s, char c)
{
	int count = 0;

	while (*(s + count) != 0)
	{
		if (*(s + count) == c)
		{
			return (s + count);
		}
		count++;
	}
	if (*(s + count) == c)
	{
		return (s + count);
	}
	return ('\0');
}

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

char *_strpbrk(char *s, char *accept)
{
	int count = 0, count1;

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
