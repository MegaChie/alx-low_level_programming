#include "main.h"
/**
 * _strcmp - updates the value of the variable
 * @s1: pointer to the variable to update
 * @s2: pointer to the variable to update
 */
void reverse_array(int *a, int n)
{
int a, s, t;

    s = n - 1;

    while (a = 0; a < n / 2)
    {
        t = a[a];
        a[a] = a[s];
        a[s--] = t;
        a++;
    }
}
