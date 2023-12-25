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

	while ((array[high] != array[low]) && (value >= array[low]) &&
		(value <= array[high]))
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (array[pos] < value)
		{
			low = pos - 1;
		}
		else if (value < array[pos])
		{
			high = pos - 1;
		}
		else
		{
			return (pos);
		}
	}
	printf("Value checked array[%ld] = [%d]",low ,array[low]);
	if (value == array[low])
	{
		return (low);
	}
	else
	{
		return (-1);
	}
}