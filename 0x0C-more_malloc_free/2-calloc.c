#include "main.h"
#include <stdlib.h>

/**
 *_calloc - a function that allocates memory for an array.
 *@nmemb: memory allocation for the number of elements of the array.
 *@size: the number of bytes or size within each element.
 *Return: the memory allocated is returned.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array_size = malloc(nmemb * size);
	if (array_size == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
