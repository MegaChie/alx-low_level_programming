#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
int a, s;

for (a = 0; a < 10; a++)
{
for (s = 0; s < 15; s++)
	{
	_putchar(s / 10 + '0');
	_putchar(s % 10 + '0');
	}
_putchar('\n');
}
}
