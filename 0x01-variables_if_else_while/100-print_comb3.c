#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int a;
int s;

for (a = 48; a <= 56; a++)
{
for (s = 49; s <= 57; s++)
{
if (s > a)
{
putchar(a);
putchar(s);
if (a != 56 || s != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
