#include "main.h"
#include <string.h>
/**
 * 
 */
unsigned int binary_to_uint(const char *b)
{
	int count = strlen(b), place = 0;

	if (b == 0)
	{
		return (0);
	}
	for (;place < count ; place++)
	{
		if (b[place] != 0 && b[place] != 1)
		{
			return (0);
		}
	}
	for (;place < count; place++)
	{
		if (d[place] == '0')
		{
			_putchar('0');
			count--;
		}
		else
		{
			_putchar(b[place] * count);
			count--;
		}
	}
	return (0);
}
