#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int a, s, d;
int i;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0)
	{
	s = 0;
	s = s + i;
	}
else ((i % 5) == 0)
	{
	a = 0;
	a = a + i;
	}
}
d = a + s;
printf("%lu\n", d);
return (0);
}
