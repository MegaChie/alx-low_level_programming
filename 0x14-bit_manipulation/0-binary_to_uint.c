#include "main.h"
#include <string.h>
/**
 * 
 */
unsigned int binary_to_uint(const char *b)
{
	int count = strlen(b), place = 0, decrease;

	if (b == 0)
	{
		return (0);
	}
	decrease = count;
	count--;
	for (;place < decrease; place++)
	{
		if (b[place] != 0 && b[place] != 1)
		{
			return (0);
		}
		_putchar(b[place] * count);
		count--;
	}
	return (0);
}
