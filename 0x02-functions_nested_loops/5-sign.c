#include "main.h"
/**
 * print_sign - a function that prints the sign of each number
 * given the conditions specified
 *
 *@n: The n parameter keeps track of the number and sends it
 *to the correct condition.
 *
 * main - prints the sign of a number
 *
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints 0 if n is zero,
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
