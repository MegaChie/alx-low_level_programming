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

_putchar(str[n]);
}
_putchar('\n');
}
