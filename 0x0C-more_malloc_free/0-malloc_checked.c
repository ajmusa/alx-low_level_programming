#include "main.h"

/**
 *malloc_checked - a function that allocates memory using malloc.
 *@b: a variable that holds the input.
 *Return: a pointer to the allocated memory, or address is returned.
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
