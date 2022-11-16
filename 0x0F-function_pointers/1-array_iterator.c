#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 * @array: pointer to array
 * @size: sixe of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (size == 0 || array == 0 || action == 0)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
