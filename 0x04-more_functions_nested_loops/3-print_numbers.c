#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function that prints the numbers, 0 to 9
 * Return: value is void
 */

void print_numbers(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
