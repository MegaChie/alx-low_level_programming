#include "main.h"
/**
 * flip_bits - get numbers of bits to flip till the numbers are equal
 * @n: first number
 * @m: second number
 * Return: number of bits flipped
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