#include "main.h"

/**
 *_strchr - a function that locates a character in a string.
 *@s: a variable that stores the value of the string.
 *@c: a variable that stores the character that is to be found in the string.
 *Return: returns the first occurence of character c in the string s or Null,
 *if they don't exist.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}
	return (s + 1);
}
