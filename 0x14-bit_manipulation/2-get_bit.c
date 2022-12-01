#include "main.h"
/**
 * 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int place;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	for (place = 0; place <= 63; place++)
	{
		if (place == index)
		{
			return (n & 1);
		}
	}
	return (-1);
}
