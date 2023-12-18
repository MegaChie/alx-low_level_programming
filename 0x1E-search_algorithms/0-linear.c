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
	printf("%d", *array);
	int found = 0, i = 0;

	/*if (array == NULL)
	{
		found = 1;
	}
	for (array; *array != "\0"; array++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *array);
		if (*array == value)
		{
			printf("found %d at index: %d", value, i);
			found = 1;
			break;
		}
		i =+ 1;
	}
	if (found == 0)
	{
		return -1;
		printf("Found %d at index: -1", value);
	}
	else
	{
		return 0;
	}*/
}
