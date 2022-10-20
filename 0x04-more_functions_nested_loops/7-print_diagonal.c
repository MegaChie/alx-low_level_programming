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
int a;

for (a = 0; a < n; a++)
{
_putchar('\\');
}
_putchar('\n');
}
}
