#include "main.h"
/**
 * times_table - function that prints the 9 times table starting with 0
 *
 * main - prints the 9 times tables starting with 0
 * Return: value is void
 */

void times_table(void)
{
	int i, k, l;

	l = 0;

	while (l <= 9)
	{
		i = 0;
		k = 1;
		_putchar('0');
		while (i < 9)
		{
			skeleton(l * k);
			i++;
			k++;
		}
		l++;
		_putchar('\n');
	}
}

/**
 * skeleton - used again to produce a comma and space between
 * each number in the multiplication table
 *@n: parameter n keeps track of when to put commas, spaces and the number
 */

void skeleton(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
