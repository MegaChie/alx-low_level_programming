#include "main.h"
/**
 * _strcmp - updates the value of the variable
 * @s1: pointer to the variable to update
 * @s2: pointer to the variable to update
 */
void reverse_array(int *a, int n)
{
while (n != 0)
{
_putchar(a[n]);
_putchar(',');
_putchar(' ');
n--;
}
}
