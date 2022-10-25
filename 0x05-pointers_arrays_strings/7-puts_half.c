#include "main.h"
/**
 * puts_half - swaps the values of two integers
 * @str: pointer to first value
 */
void puts_half(char *str)
{
int n;

for (n = 0; str[n] != '\0'; n++)
{
}
if (n % 2 == 0)
{
int s;
for (s = n / 2; s <= n; s++)
{
_putchar(str[s]);
}
_putchar('\n');
}
else
{
int d = n - 1;
_putchar(str[d]);
_putchar('\n');
}
}
