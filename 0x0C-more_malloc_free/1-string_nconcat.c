#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - a function that concatenates two strings.
 *@s1: a variable that olds the first part of the string.
 *@s2: a variable that Holds the second part of the string.
 *@n: a variable that contains a value that concatenates the number of
 *characters to the array.
 *Return: the concatenated string is returned as a pointer to a newly allocated
 *space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l, total_length, j;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	total_length = ((i + n) * sizeof(char));
	array = malloc(total_length + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	l = 0;
	while (l < total_length && s1[l] != '\0')
	{
		array[l] = s1[l];
		l++;
	}
	j = 0;
	while (l < total_length && s2[j] != '\0')
	{
		array[l] = s2[j];
		l++;
		j++;
	}
	array[l] = '\0';
	return (array);
}
