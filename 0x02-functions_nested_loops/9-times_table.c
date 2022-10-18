#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int a, s, d;

for (a = 0; a <= 9; a++)
	{
	for (s = 0; s <= 9; s++)
		{
		d = a * s;
		if (s == 0)
			{
			_putchar(d + '0');
			}
		if (d < 10 && s != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
		else if (d >= 10)
			{
			_putchar(',');
			_putchar(' ');
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
