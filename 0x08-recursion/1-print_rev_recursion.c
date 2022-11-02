#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to string
 */
void _print_rev_recursion(char *s)
{
	int c = strlen(s) - 1;

	if (c == 0)
	{
		_putchar(s[0]);
		return;
	}
	_putchar(s[c]);
	_putchar(s[c - 1]);
}
