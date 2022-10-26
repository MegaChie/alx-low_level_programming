#include "main.h"
/**
 * _strcmp - updates the value of the variable
 * @s1: pointer to the variable to update
 * @s2: pointer to the variable to update
 */
void reverse_array(int *a, int n)
{
int i, j, tmp;

    j = n - 1;

    for (i = 0; i < n / 2; i++)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j--] = tmp;
    }
}
