#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_digit;
	char output[50];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n%10;
	output = "Last digit of " + n + " is " + last_digit;
	if (last_digit>5)
	{
		output = output + " and is greater than 5";
	}
	else if (last_digit == 0)
	{
		output = output + " and is 0";
	}
	else
	{
		output = output + " and is less than 6 and not 0";
	}
	printf(output);
	return (0);
}
