#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
		{

		}
		else
		{
			putchar(alpha);
		}
	}
	return (0);
}
