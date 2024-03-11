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
	size_t n = 0;

	/*Checking if the array is empty or not even there*/
	if (array == NULL)
	{
		return (-1);
	}

	/*Starts the search*/
	for (; n < size; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
	}

	/*Not found*/
	return (-1);
}
