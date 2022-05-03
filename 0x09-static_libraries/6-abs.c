#include "main.h"
/**
 *_abs - a function that checks the absolute value of an integer
 *
 *@r: evalutates the value stored in r through the conditional
 *
 * main - prints the absolute value of an integer
 *
 * Return: The value will always return 0
 */

int _abs(int r)

{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
