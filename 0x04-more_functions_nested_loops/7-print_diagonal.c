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

for (s = 0; s < n; s++)
{
for (d = 0; d < s; d++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
