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

	while (low <= high && (array[low] <= value && value <= array[high])) {
		if (low == high) {
			if (array[low] == value) {
				return (low);
			}
			return (-1);
		}
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if (pos < low || pos > high) {
			return (-1);
		}
		if (array[pos] == value) {
			return (pos);
		}
		else if (array[pos] < value) {
			low = pos + 1;
		}
		else {
			high = pos - 1;
		}
	}
	return (-1);
}
