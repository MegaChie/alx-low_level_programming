#include "main.h"
#include <string.h>
/**
 * 
 */
unsigned int binary_to_uint(const char *b)
{
	int count = strlen(b), place = 0;

	if (b == 0 || b == NULL)
	{
		return (0);
	}
	if (b == '1')
	{
		return (1);
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
		_putchar(b[place] * count);
		count--;
	}
	return (0);
}
