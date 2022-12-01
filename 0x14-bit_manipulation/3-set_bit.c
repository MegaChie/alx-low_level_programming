#include "main.h"
/**
 * 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value;

	if (index > 63)
	{
		return (-1);
	}

	value = 1 << index;
	*n = (*n | value);

	return (1);
}
