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
	size_t a = 0, b = floor(sqrt(size));

	if (array == 0 || array == NULL)
	{
		return (-1);
	}
	while (array[((a<b) ? a : b) - 1] < value)
	{
		a = b;
		b = b + floor(sqrt(size));
		if (a >= size)
		{
			return (-1);
		}
	}
	while (array[a] < value)
	{
		a++;
		if (a == ((a<b) ? a : b))
		{
			return (-1);
		}
	}
	if (array[a] == value)
	{
		return (a);
	}
	else
	{
		return (-1);
	}
}
