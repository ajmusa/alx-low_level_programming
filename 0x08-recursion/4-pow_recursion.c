#include "main.h"

/**
 *_pow_recursion - a funciton that returns the value of x raised to the power
 *of y.
 *@x: a variable representing the number being raised to the power of y.
 *@y: a variable representing the power number.
 *Return: returns the value of the output of x raised to the power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
