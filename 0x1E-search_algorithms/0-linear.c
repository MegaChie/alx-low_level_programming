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
	size_t i = 0;

	if (array == 0 || array == NULL)
	{
		return -1;
	}
	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return i;
		}
	}
	return 0;
}
