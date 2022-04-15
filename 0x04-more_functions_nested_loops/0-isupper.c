#include "main.h"
/**
 *_isupper - a function that checks for uppercase characters
 *@c: a variable that stores letters of the alphabet
 *Return: Returns a value of 1 if c contains an uppercase
 *letter
 *Return: 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
