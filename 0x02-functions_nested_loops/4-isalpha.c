#include "main.h"
/**
 * main: checks for lowercase or uppercase letters
 *
 * _isalpha: a function that checks for alphabetic characters
 *
 * @c: evaluates c and inserts it through the conditional
 *
 * Return: 1 if c is a uppercase or lowercase
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
