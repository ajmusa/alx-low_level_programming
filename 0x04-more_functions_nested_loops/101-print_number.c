#include "main.h"
/**
 *print_number - prints out an integer.
 *@n: The variable n stores tha value that is being evaluated.
 *Return: the value of 0 will be returned.
 */

void print_number(int n)
{
	unsigned int c, s, count;

	if (n < 0)
	{
		n *= -1;
		_putchar(45);
	}
	else
	{
		c = n;
	}

	s = c;
	count = 1;

	while (s > 9)
	{
		s /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((c / count) % 10) + 48);
	}
}
