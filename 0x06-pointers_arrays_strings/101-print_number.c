#include "main.h"
/**
 * reverse_array - updates the value of the variable
 * @a: pointer to the variable to update
 * @n: number of variables in array
 */
void print_number(int n)
{
    unsigned int n1;

    if (n < 0)
    {
        n1 = -n;
        _putchar('-');
    } else
    {
        n1 = n;
    }

    if (n1 / 10)
        print_number(n1 / 10);

    _putchar((n1 % 10) + '0');
}
