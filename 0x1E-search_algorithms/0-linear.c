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

    // checking if the array is empty or not even there
    if (array == 0 || array == Null)
    {
        return (-1);
    }

    // start the search
    for (; n < size; n++)
    {
        printf("Value checked array[%ld] = [%d]", n, array[n])
        nf (array[n] == value)
        {
            return (n);
        }
    }

    // not found
    return (-1);
}
