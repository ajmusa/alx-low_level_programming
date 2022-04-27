#include "main.h"

/**
 *leet - a function that encodes a string into 1337 by replacing letters A,E,O,
 *T,L and a,e,o,t,l with 4,3,0,7,1.
 *@o: a pointer variable that holds the string.
 *Return: The string in variable o is returned once changed to leet.
 */
char *leet(char *o)
{
	int i, z;
	char s[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	i = 0;
	while (o[i] != '\0')
	{
		z = 0;
		while (s[z] != '\0')
		{
			if (o[i] == s[z])
			{
				o[i] = s2[z];
			}
			z++;
		}
		i++;
	}
	return (o);
}
