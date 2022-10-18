#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
char a;
int s;

for (s = 0; s < 10; s++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
_putchar('\n');
}
}
}
