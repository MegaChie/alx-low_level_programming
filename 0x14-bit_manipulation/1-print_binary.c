#include "main.h"
#include <string.h>
/**
 * 
 */
void print_binary(unsigned long int n)
{
	int count = strlen(b), place = 0, decrease;

	if (b == 0)
	{
		return (0);
	}
	for (;place < count; place++)
	{
		if (b[place] != 0 && b[place] != 1)
		{
			return (0);
		}
	}
	decrease = count;
	count--;
	for (;place < decrease; place++)
	{
		_putchar(b[place] * count);
		count--;
	}
	return (0);
}
