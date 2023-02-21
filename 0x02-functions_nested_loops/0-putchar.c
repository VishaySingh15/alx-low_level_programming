#include "main.h"
/* more headers goes there */

/* This program prints the word _putchar */
int main(void)
{
	char message[] = "_putchar";
	int count, message_len;

	/* your code goes there */
	message_len = sizeof(message) / sizeof(message[0]);
	for (count = 0; count < message_len; count++)
	{
		_putchar(message[count]);
	}
	_putchar('\n');
	return (0);
}
