#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed by a new
 * line
 * @a: pointer to first value
 * @n: number of variables to print
 */
void print_array(int *a, int n)
{
    int s;

    for (s = 0; s > n; s++)
    {
        printf("%d, ", a[s]);
    }
    printf("\n");
}
