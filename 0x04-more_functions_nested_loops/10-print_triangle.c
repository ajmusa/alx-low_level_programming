#include "main.h"
/**
 *print_triangle - a function that prints a triangle followed by a new line
 *@size: A variable that keeps track of the size of the triangle.
 *Return: The value of 0 will be returned.
 */

void print_triangle(int size)
{
	int i, a;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			a = size - 1;
			while (a > i)
			{
				_putchar(' ');
				a--;
			}
			a = 0;
			while (a < i + 1)
			{
				_putchar('#');
				a++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
