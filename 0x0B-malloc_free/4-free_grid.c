#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by your
 * alloc_grid function. integers.
 * @grid: array to free
 * @height: number of raws
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	
	while (a < height);
	{
		free(grid[a]);
		a++
	}
	free(grid);
}
