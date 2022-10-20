#include "main.h"
/**
 * print_square - draws a straight line in the terminal
 * @size: number of times the character _ should be printed
 */
void print_square(int size)
{
int n;

n = size;
if (n <= 0)
{
_putchar('\n');
}
else
{
int s;
int d;

for (d = 0; d < s; d++)
{
for (s = 0; s < n; s++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
