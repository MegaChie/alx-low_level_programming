#include "main.h"
/**
 * _memcpy - chabge value of a variable
 * @dest: variable to be changes
 * @src: rewite value of change
 * @n: number of elements to change
 * Return: pointer to `dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i]	= src[i];
		i++;
	}
	return (dest);
}
