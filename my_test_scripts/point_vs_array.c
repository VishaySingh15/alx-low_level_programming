#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs an operation on 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Success
 */
int main()
{

	int a[] = {1,2,3},
	int *ptr = a;
	
	printf("%p", *ptr);
	return (0);,
}
