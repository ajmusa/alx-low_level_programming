#include "main.h"

/**
 *_strlen - function that returns the length of the string
 *@s: pointer that takes in the value of the string
 *Return: The last value of the iteration of i is returned
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
