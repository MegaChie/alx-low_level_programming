#include "main.h"
/**
 * print_triangle - draws a straight line in the terminal
 * @size: number of times the character _ should be printed
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int s;
int d;

for (s = 0; s < size; s++)
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
