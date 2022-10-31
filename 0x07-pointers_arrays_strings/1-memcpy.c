#include "main.h"
/**
 *  *_memcpy - change value of variable
 * @dest: buffer array
 * @src: constant byte
 * @n: number of bytes of memory area to fill
 * Return: Pointer to memory area `dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		unsigned int j = 0;
		while (src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
	
		i++;
	}
	return (dest);
}
