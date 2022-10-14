#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char a;

for (n = 48; n < 58; n++)
	{
	putchar(n);
	}
for (a = 'a'; a < 'g'; a++)
	{
	putchar(a);
	}
putchar('\n');
return (0);
}
