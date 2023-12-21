#include "search_algos.h"
/**
 * binary_search - do simple search algorithm
 * @array: integer pointer to the first element of the array to search in
 * @size: integer variable, and is the number of elements in array
 * @value: integer variable, and is  is the value to search for
 * Return: the first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middel = size, i = 0;

	if (array == 0 || array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		middel = floor((left + right) / 2);
		printf("Searching in array: ");
		for (; i < middel; i++)
		{
			printf("%d, ", array[i]);
		}
		if (array[middel] < value)
		{
			left = middel + 1;
		}
		else if (array[middel] > value)
		{
			right = middel - 1;
		}
		else
		{
			return (middel);
		}
	}
	return (-1);
}
