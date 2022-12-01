#include "main.h"
#include <string.h>
/**
 * 
 */
unsigned int binary_to_uint(const char *b)
{
	int count = strlen(b), place = 0, decrease;

	if (!b)
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
	decrease = count;
	for (;place < decrease; place++)
	{
		count--;
		_putchar(b[place] * count);
		count--;
	}
	return (0);
}
