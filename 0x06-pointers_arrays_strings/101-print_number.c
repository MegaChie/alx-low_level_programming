#include "main.h"
/**
 * reverse_array - updates the value of the variable
 * @a: pointer to the variable to update
 * @n: number of variables in array
 */
void print_number(int n)
{
unsigned int r;
if (n < 0)
{
r = -n;
}
else
{
r = n;
}
if (r / 10)
{
print_number(r / 10);
_putchar((r % 10) + '0');
}
}
