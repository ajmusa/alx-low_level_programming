#include "main.h"

/**
 *rev_string - a function that prints a string in reverse
 *@s: a variable that holds the string to be reversed.
 */

void rev_string(char *s)
{
	int i, p;
	char m, l;

	for (i = 0; s[i] != '\0'; i++)
		;
	i--;
	for (p = 0 ; p < i; p++)
	{
		m = s[i];
		l = s[p];
		s[i--] = l;
		s[p] = m;
	}
}
