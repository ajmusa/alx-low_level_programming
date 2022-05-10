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
	int i, len;
	int *array_size;

	if (min > max)
	{
		return (NULL);
	}
	for (len = 0; len < (max - min); len++)
		;

	array_size = malloc(sizeof(int) * (len + 1));
	if (array_size == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		array_size[i] = min++;
	}
	return (array_size);
}
