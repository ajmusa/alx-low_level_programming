#include "main.h"
/**
 *_isalpha - a function that checks for alphabetic characters
 *
 * main - checks for lowercase or uppercase letters
 *
 *@c: evaluates c and inserts it through the conditional
 *
 * Return: 1 if c is a uppercase or lowercase letter
 * otherwise 0
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
