#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion -  returns the length of a string.
 * @s: pointer to string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
