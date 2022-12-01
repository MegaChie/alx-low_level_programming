#include "main.h"
/**
 * clear_bit - change a certain bit's value to 0
 * @n: pointer to number
 * @index: place of bit to clear
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
	{
		return (-1);
	}
	m = 1 << index;
	if (*n & m)
	{
		*n ^= m;
	}
	return (1);
}
