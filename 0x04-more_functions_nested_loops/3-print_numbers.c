#include "main.h"
/**
 * print_numbers - function that prints the numbers, 0 to 9
 * Return: value is void
 */

void print_numbers(void)
{
	int n;
	char c;

	n = 0;

	while (n < 10)
	{
		c = n;
		_putchar(c);
		n++;
	}
	_putchar('\n');
}
