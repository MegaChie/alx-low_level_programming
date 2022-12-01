#include "main.h"
/**
 * 
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitCount;

	for (bitCount = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			bitCount++;
		}
	}
	return (bitCount);
}