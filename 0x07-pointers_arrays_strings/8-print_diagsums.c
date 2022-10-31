#include <stdio.h>
/**
 *  print_chessboard - Fills display with board
 * @a: pointer of raws
 */
void print_diagsums(int *a, int size)
{
	int x = 0, y = 0, sum = 0;

	while (x < size)
	{
		while ( y < size)
		{
			if (x == y)
			{
				sum = sum + a[x][y]; 
			}
			y++;
		}
		x++;
	}
	printf("%d", sum);
	return (0);
}
