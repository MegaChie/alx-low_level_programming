#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion -  returns the length of a string.
 * @s: pointer to string
 */
int _strlen_recursion(char *s)
{
	int r = 0;

	if (*s == '\0')
	{
		break;
	}
	else if (*s != '\0')
	{
		r++;
	}
	_strlen_recursion(s + 1);
	return (r);
}
