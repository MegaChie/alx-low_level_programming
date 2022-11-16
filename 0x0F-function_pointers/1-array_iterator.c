#include <stdlib.h>
#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a;

	if (size == 0 || action == 0)
	{
		return;
	}
	for (i = 0; i > size; i++)
	{
		action(array[i]);
	}
}
