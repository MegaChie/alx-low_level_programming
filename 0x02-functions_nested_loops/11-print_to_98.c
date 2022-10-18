#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
int a;
if (n > 98)
	{
	for (a = n; a >= 98; a--)
		{
		_putchar(a + '0');
		_putchar(' ');
		_putchar(',');
		}
	}
else
	{
	for (a = n; a <= 98; a++)
		{
		_putchar(a + '0');
		_putchar(' ');
		_putchar(',');
		}
	}
_putchar('\n');
}
