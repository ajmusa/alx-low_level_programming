#include "nain.h"
/**
 *print_line - a function that draws a straight line in the terminal
 *@n: n is the parameter that holds the value of the number of times the
 *character "_" should be printed
 *Return: the value 0 will be returned.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
