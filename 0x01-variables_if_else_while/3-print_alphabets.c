#include <stdio.h>

int main(void)
{

	int a = 'a';

	while (a)
	{
		putchar(a);
		if (a == 'z')
		{
			a = 'A';
		}
		else if (a == 'Z')
		{
			return (0);
		}
		else
		{
			a++;
		}
	}

	return (0);
}
