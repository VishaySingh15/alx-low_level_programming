#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int num = 48;

	while (num)
	{
		putchar(num);
		if (num == 57)
		{
			return (0);
		}
		else
		{
			putchar(44);
			putchar(32);
			num++;
		}
	}

	return (0);
}
