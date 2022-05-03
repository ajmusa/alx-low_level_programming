#include "main.h"

/**
 *_strcmp - a function that compares two strings.
 *@s1: a variable that holds the first string to be compared.
 *@s2: a variable that holds the second string to be compared.
 *Return: value of 0 is returned.
 */
int _strcmp(char *s1, char *s2)
{
	int i, a1, a2;

	i = 0;
	a1 = 0;
	a2 = 0;
	while (s1[a1] != '\0')
	{
		a1++;
	}
	while (s2[a2] != '\0')
	{
		a2++;
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (a1 > a2)
	{
		return (s1[a2]);
	}
	else if (a1 < a2)
	{
		return (s2[a1] * -1);
	}
	return (0);
}
