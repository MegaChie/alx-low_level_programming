#include "main.h"
/**
 * get_bit - shows bit at index value.
 * @n: number to find bit in
 * @index: the place of bit to show
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int place;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	for (place = 0; place <= 63; n >>= 1, place++)
	{
		if (place == index)
		{
			return (n & 1);
		}
	}
	return (-1);
}
