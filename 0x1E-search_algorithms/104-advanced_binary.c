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
 * advanced_binary - do simple search algorithm
 * @array: integer pointer to the first element of the array to search in
 * @size: integer variable, and is the number of elements in array
 * @value: integer variable, and is  is the value to search for
 * Return: the first index where value is located or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	/*Checking if the array is empty or not there*/
	if (array == NULL)
	{
		return (-1);
	}

	/*Starts the search*/
	while (left <= right)
	{
		printer(array, left, right);
		middle = left + ((left + right) / 2);
		if ((array[middle] == value) &&
			(middle == 0 || array[middle - 1] < value))
		{
			return (middle);
		}
		else if (value > array[middle])
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
