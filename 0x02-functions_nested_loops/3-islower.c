#include "main.h"
/**
 * c: evaluates ascii value of the letter and 
 * gets it through the conditional
 * 
 * _islower: a function that checks for lowercase characters
 *
 * main: a function that checks for lowercase characters
 *
 * Return: 1 if c is lowercase, 0 if otherwise.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
