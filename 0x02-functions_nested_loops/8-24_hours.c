#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int a;
int s;

for (a = 0; a < 24; a++)
	{
	for (s = 0; s < 60; s++)
		{
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
		_putchar(':');
		_putchar((s / 10) + '0');
		_putchar((s % 10) + '0');
		}
	}
}
