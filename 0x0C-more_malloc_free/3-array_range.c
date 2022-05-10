#include "main.h"
#include <stdlib.h>

/**
 *array_range - a function that creates an array of integers.
 *@min: a variable that takes in a minimum number as the argument.
 *@max: a variable that takes in a maximum number as the argument.
 *The output array will contain all values from min up to and including max.
 *Return: the pointer will point to the newly created array, as return value.
 */

int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));
	i = 0;
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
