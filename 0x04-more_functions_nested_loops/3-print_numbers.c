#include "main.h"
/**
 * print_numbers - function that prints the numbers, 0 to 9
 * main - prints the numbers 0 to 9
 * Return: value is void
 */

void print_numbers(void)
{
	int n;
	
	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
