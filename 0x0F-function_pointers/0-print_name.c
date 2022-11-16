#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
	{
		return;
	}
	f(name);
}
