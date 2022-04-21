#include <stdio.h>
#include "main.h"

/**
 *swap_int - a function that swaps the values of two integers.
 *@a: holds the value of one integer.
 *@b: holds the value of the second integer.
 *Return: The value 0 is returned.
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *b;
	*b = *a;
	*a = s;
}
