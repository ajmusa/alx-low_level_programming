#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s: a variable that holds the string.
 *@accept: a variable that holds the bytes.
 *Return: the number of bytes in initial segment of s consisting of only bytes
 *from accept is returned.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, n, r, total;

	i = 0;
	total = 0;
	while (s[i] != '\0')
	{
		n = 0;
		r = 0;
		while (accept[n] != '\0')
		{
			if (s[i] != accept[n])
			{
				n++;
			}
			else if (s[i] == accept[n])
			{
				r++;
				n++;
				total++;
			}
		}
		if (r == 0)
		{
			return (total);
		}
		i++;
	}
	return (total);
}
