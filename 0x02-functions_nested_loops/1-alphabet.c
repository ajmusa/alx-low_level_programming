#include "main.h"
/**
 *print_alphabet- prints out all the lowercase alphabets from a -z
 *
 *main - prints out the alphabet
 *
 *Return: Always 0.
 */

void print_alphabet(void)

{
	int i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
