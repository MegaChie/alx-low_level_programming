#include <stdlib.h>
#include <stdio.h>

int int_index(int *array, int size, int (*cmp)(int))
{
	int a, val = -1;

	if (array && cmp)
	{
		if (size <= 0)
		{
			val = -1;
			return (val);
		}
		for (a = 0; a < size; a++)
		{
			cmp(array[a]);
			if (cmp(array[a]) > 0)
			{
				val = a;
				break;
			}
			if (cmp(array[a]) == -1)
			{
				return (val);
			}
		}
	}
	return (val);
}
