#include "main.h"
/**
 * puts_half - swaps the values of two integers
 * @str: pointer to first value
 */
void puts_half(char *str)
{
int n, s, d;

for (n = 0; str[n] != '\0'; n++)
{
}
if (n % 2 == 0)
{
for (s = n / 2; str[s] != '\0'; s++)
{
_putchar(str[s]);
}
}
else if (n % 2 != 0)
{
d = n - 1;
_putchar(str[d]);
}
_putchar('\n');
}
