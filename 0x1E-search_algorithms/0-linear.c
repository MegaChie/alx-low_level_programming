#include "search_algos.h"
/**
 * linear_search - do simple search algorithm
 * @array: integer pointer to the first element of the array to search in
 * @size: integer variable, and is the number of elements in array
 * @value: integer variable, and is  is the value to search for
 * Return: the first index where value is located or -1 
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i, found = 0;

	if (array == NULL)
	{
		found = 1;
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("found %d at index: %zu", value, i);
			found = 1;
			break;
		}
	}
	if (found == 0)
	{
		printf("Found %d at index: -1", value);
	}
	return 0;
}
