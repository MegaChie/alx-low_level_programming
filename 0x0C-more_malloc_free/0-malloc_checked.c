#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size to allocate
 * Return: NULL or pointer to allocated space.
 */
void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(b);
	if (num == NULL)
	{
		exit (98);
	}
	return (num);
}
