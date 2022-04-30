#include "main.h"

/**
 *_strlen_recursion - a function that returns the length of a string.
 *@s: a pointer variable that points to a variable that stores a string.
 *Return: returns the length of the string stored in s.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != 0)
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (*s);
}
