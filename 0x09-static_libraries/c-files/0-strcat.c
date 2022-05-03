#include "main.h"

/**
 *_strcat - a function that concatenates two strings.
 *@dest: a variable that holds the string that src will be appended to.
 *@src: a variable that holds a string that will be appended to dest.
 *Return: a pointer to the resulting whole string dest is returned.
 */

char *_strcat(char *dest, char *src)
{
	int i, a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
