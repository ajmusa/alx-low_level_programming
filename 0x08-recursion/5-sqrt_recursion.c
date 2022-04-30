#include "main.h"

/**
 *_sqrt_recursion - a function that returns the natural square root of
 *a number.
 *@n: input number that you want to find the square root of.
 *Return: returns the square root of the number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (checker_sqrt(n, 0));
}

/**
 *checker_sqrt - a function that checks if a number is a natural square root
 *and returns the natural square root.
 *@n: the input number from the main function above.
 *@i: the number multiplied by itself.
 *Return: returns the square root of the number n or -1 if n does not have a
 *natural square root.
 */
int checker_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (checker_sqrt(n, i + 1));
	}
}
