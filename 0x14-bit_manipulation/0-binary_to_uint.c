#include "main.h"
#include <string.h>
/**
 * 
 */
unsigned int binary_to_uint(const char *b)
{
	int count = strlen(b), place = 0;
	char value;

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
	value[place] = b[place] * count;
		count--;
		_putchar(value[place]);
	}
	return (0);
}
