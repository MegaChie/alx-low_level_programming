#include "main.h"
#include <stdio.h>
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
		printf("%d, ", a);
		}
	}
else if (n == 98)
	{
	printf("%d",  n);
	}
else
	{
	for (a = n; a <= 98; a++)
		{
		printf("%d, ", a);
		}
	}
printf("\n");
}
