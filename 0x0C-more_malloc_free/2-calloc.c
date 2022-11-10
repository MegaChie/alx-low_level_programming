#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array of nmemb elements of size
 *  bytes each and returns a pointer to the allocated memory.
 * @nmemb: number of elements
 * @size: size of a single element
 * Return: 0 or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mat;
	unsigned int a;

	if (nmemb <= 0 || size <= 0)
	{
		return (0);
	}
	mat = malloc(nmemb * size);
	if (mat == 0)
	{
		return (0);
	}
	for (a = 0; a < (nmemb * size); a++)
	{
		*((char *)(mat) + a) = 0;
	}
	return (mat);
}
