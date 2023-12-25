#include "search_algos.h"
/**
 * interpolation_search - do simple interpolation algorithm
 * @array: integer pointer to the first element of the array to search in
 * @size: integer variable, and is the number of elements in array
 * @value: integer variable, and is  is the value to search for
 * Return: the first index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;
	size_t prin = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

	
	if (array == NULL)
	{
		return (-1);
	}
	for (; high >= low;)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", prin);
			break;
		}
		if (value == array[pos])
		{
			return (pos);
		}
		if (array[pos] > value)
		{
			high = pos - 1;
		}
		else
		{
			low = pos + 1;
		}
	}
	
	return (-1);
	
}
