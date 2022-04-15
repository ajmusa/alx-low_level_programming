#include <stdio.h>
#include <math.h>
/**
 * main - a program that finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 * Return: a void value
 */

int main(void)
{
	long num, a;

	a = 2;
	num = 612852475143;
	while (a < sqrt(num))
	{
		while (num % a == 0)
		{
			num = num / a;
			printf("%ld %ld\n", num, a);
		}
		a++;
	}
	printf("%ld\n", num);
	return (0);
}
