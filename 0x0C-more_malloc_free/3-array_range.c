#include <stdio.h>
#include <stdlib.h>
/**
 */
int *array_range(int min, int max)
{
	int *arr, space, count;

	if (min > max)
	{
		return (0);
	}
	space = max + 1 - min;
	arr = malloc(sizeof(int) * space);
	if (arr == 0)
	{
		return (0);
	}
	for (count = 0; count < space; count++)
	{
		*(arr + count) = min + count;
	}
	return (arr);
}