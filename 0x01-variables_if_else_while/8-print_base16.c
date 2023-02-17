#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int alpha = 48;

	while (alpha)
	{
		if (alpha == 58)
		{
			alpha = 'a';
		}
		else if (alpha == 'f')
		{
			return (0);
		}
		putchar(alpha);
		alpha++;
	}

	return (0);
}
