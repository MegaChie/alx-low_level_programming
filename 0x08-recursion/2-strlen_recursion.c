#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion -  returns the length of a string.
 * @s: pointer to string
 */
int _strlen_recursion(char *s)
{
	int r = 0;

	_strlen_recursion(s + 1);
	if (*s == '\0')
	{
		return (r);
	}
	r++;
	return (r);
}
