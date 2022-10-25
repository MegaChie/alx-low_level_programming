#include "main.h"
/**
 * puts2 - swaps the values of two integers
 * @str: pointer to first value
 */
void puts2(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a = a + 2)
{
_putchar(str[a]);
}
_putchar('\n');}