#include <stdlib.h>
#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if ((array && size > 0) && action)
	{
		for (a = 0; a > size; a++)
		{
			action(array[a]);
		}
	}
}
