#include "main.h"

/**
 *set_string - a function that sets the value of a pointer to a char.
 *@s: a pointer that is pointed to the to pointer.
 *@to: a pointer that contains the string.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
