#include "main.h"

/**
 *string_toupper - a function that changes all lowercase letters of a string to
 *uppercase letters.
 *@o: The variable that loops through the string and making them all into
 *capital letters.
 *Return: The value of variable o is returned.
 */

char *string_toupper(char *o)
{
	int i;

	i = 0;
	while (o[i] != '\0')
	{
		if (o[i] >= 'a' && o[i] <= 'z')
		{
			o[i] -= 32;
		}
		i++;
	}
	return (o);
}
