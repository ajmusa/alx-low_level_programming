#include "main.h"

/**
 *_strncat - a function that concatenates two strings.
 *@dest: a variable that holds the string that will receive appending from src.
 *@src: a variable that holds the string that will append to dest.
 *@n: The variable that determines the cut off point if it's less
 *than the string length.
 *Return: a pointer to the resulting new string dest will be returned.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, a, b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	b = a;
	a = 0;
	while (a < b && a < n)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	return (dest);
}
