#include "search_algos.h"
/**
 * jump_search - do simple search algorithm
 * @array: integer pointer to the first element of the array to search in
 * @size: integer variable, and is the number of elements in array
 * @value: integer variable, and is  is the value to search for
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, o = floor(sqrt(size)), n;
	int count = 0;

	if (array == 0 || array == NULL)
	{
		return (-1);
	}
	for (n = 0; n < size; n++)
	{
		count++;
	}
	while (array[fmin(i , count) - 1] < value)
	{
		i = o;
		o = o + floor(sqrt(size));
		if (o >= size)
		{
			return (-1);
		}
	}
	while (array[i] < value)
	{
		o = o + 1;
		if (o == fmin(o, count))
		{
			return (-1);
		}
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
	{
		return (o);
	}
	else
	{
		return (-1);
	}
}
