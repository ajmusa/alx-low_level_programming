#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * main - evaluates last digit
 *
 *@r: stores the last digit and goes through the condtional statements
 *
 * Return: the value of the last digit
 */

int print_last_digit(int r)
{
	int remainder;

	if (r < 0)
	{
		remainder = (-1 * (r % 10));
		_putchar(remainder + '0');
		return (remainder);
	}
	else
	{
		remainder = (r % 10);
		_putchar(remainder + '0');
		return (remainder);
	}
}
