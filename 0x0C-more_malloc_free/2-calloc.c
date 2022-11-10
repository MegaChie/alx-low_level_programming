#include <stdio.h>
#include <stdlib.h>
/**
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
