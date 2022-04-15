#include <stdio.h>
#include <math.h>
/**
 * main - a program that finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 * Return: a void value
 */

int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
