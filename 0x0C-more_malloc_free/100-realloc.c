#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory address previously allocated with a call
 * to malloc.
 * @old_size: input size in bytes, of the allocated space for ptr.
 * @new_size: new size, in bytes, of the new memory block.
 * Return: the pointer pointing to the array in the memory block is returned.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest, *src;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);

	src = ptr;

	for (i = 0; i < new_size && i < old_size; i++)
		dest[i] = src[i];
	free(ptr);

	return (dest);
}
