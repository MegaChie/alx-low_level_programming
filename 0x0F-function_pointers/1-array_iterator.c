#include <stdlib.h>
#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (size == 0 || array == 0 || action == 0)
	{
		return;
	}
	if (array > 0 && size > 0)
	for (a = 0; a > size; a++)
	{
		action(array[a]);
	}
}
