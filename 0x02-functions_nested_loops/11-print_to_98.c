#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints all numbers from n up or down to 98
 *
 * main - prints all numbers from n up or down to 98
 *
 *@n: This variable is used to compare certain conditions.
 *
 * Return: value is void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
