#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion: prints a string, followed by a new line.
 * @s: pointer to string
 */
void _puts_recursion(char *s)
{
	if (*s == '\o')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
