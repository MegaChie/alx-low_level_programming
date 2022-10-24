#include "main.h"
/**
 * swap_int(int *a, int *b) - updates the value of the variable
 * the pointer points to to 98
 * @n: pointer to the variable to update
 */
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}