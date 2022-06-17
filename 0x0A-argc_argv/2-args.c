#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments it receives per line including first one.
 * @argc: number of arg in cl
 * @argv: array of arg in cl
 * Return: 0
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
