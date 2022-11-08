#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of
 * integers.
 */
int **alloc_grid(int width, int height)
{
	int *x[height][width];
	int a = 0, s = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	x = malloc(sizeof(int) * width * height);
	if (x == NULL)
	{
		return (NULL);
	}
	while (a < height)
	{
		while (s < width)
		{
			x[a][s] = 0;
		}
	}
	return (x);
}