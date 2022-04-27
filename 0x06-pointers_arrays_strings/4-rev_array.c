#include "main.h"

/**
 *reverse_array - a function that reverses the content of an array of integers.
 *@a: a variable that keeps track of the array.
 *@n: a variable that is the number of elements of the array.
 *Return: value is void.
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
