#include "search_algos.h"
/**
 * printer - Prints the array from the function bellow.
 * @array: The array to print.
 * @left: The left index of the array.
 * @right: The right index of the array.
 */
void printer(int *array, size_t left, size_t right)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = left; i < left + (right - left + 1); i++)
		{
			printf("%d%s", *(array + i), i < left + (right - left) ? ", " : "\n");
		}
	}
}

/**
 * binary_search - do simple search algorithm
 * @array: integer pointer to the first element of the array to search in
 * @size: integer variable, and is the number of elements in array
 * @value: integer variable, and is  is the value to search for
 * Return: the first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1, left = 0, middle;

	while (left <= right)
	{
		printer(array, left, right);
		middle = floor((left + right) / 2);
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
