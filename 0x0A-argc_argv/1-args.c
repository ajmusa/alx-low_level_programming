#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of arguments passed to function name.
 * @argc: number of arg in cl
 * @argv: array of arg in cl
 * Return: 0
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
