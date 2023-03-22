#include <stdio.h>
#include "function_pointers.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
    f(*name);
}
