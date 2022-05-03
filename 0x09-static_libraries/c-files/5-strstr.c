#include "main.h"

/**
 *_strstr - a function that locates the first occurence of the substring needle
 *in the string haystack.
 *@haystack: a variable that contains the string.
 *@needle: a variable that contains the substring that is affecting haystack.
 *Return: returns the located substring or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, i2, b;

	i = 0;
	while (haystack[i] != '\0')
	{
		b = i;
		i2 = 0;
		while (needle[i2] != '\0' && needle[i2] == haystack[i]
		       && haystack[i] != '\0')
		{
			i++;
			i2++;
		}
		if (needle[i2] == '\0')
		{
			return (haystack + b);
		}
		i = b + 1;
	}
	return (0);
}
