#include "main.h"
#include <string.h>
/**
 * binary_to_uint - convert binary to decimal.
 * @b: pointer to binary.
 * Return: convertion result
 */
unsigned int binary_to_uint(const char *b)
{
	int count = strlen(b), place = 0, decrement;
	unsigned int value = 0;

	if (b == 0)
	{
		return (0);
	}
	for (;place < count; place++)
	{
		if (b[place] != '0' && b[place] != '1')
		{
			return (0);
		}
	}
	decrement = count;
	count--;
	for (;place >= decrement; place++)
	{
		count--;
		value = b[place] * (2 ^ count);
	}
	return (value);
}
