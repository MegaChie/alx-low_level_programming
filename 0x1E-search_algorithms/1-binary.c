#include "search_algos.h"
/**
 * print_array - Prints the array.
 * @array: The source of the array to print.
 * @left: The left index of the array.
 * @right: The right index of the array.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = left; i < left + (right - left + 1); i++)
			printf("%d%s", *(array + i), i < left + (right - left) ? ", " : "\n");
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
	size_t left = 0, right = size - 1, middel;

	if (array == 0 || array == NULL)
	{
		return (-1);
	}
	/* printing whole array */
	print_array(array, left, right);
	while (left <= right)
	{
		middel = floor((left + right) / 2);
		/* printing slice */
		print_array(array, left, right);
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
