#include "main.h"
/**
 * print_diagonal - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int s;
int d;

for (s = 1; s < size; s++)
{
for (d = 1; d < size; d++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
