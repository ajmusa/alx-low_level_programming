#include "main.h"

/**
 *_memcpy - a function that copies memory area.
 *@dest: variable that holds the memory area that n bytes from src is being
 *copied to.
 *@src: variable that holds the memory area.
 *@n: The number of bytes being copied over to dest.
 *Return: value of dest is returned as pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
