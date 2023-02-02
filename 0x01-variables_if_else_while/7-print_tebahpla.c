#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char al;

for (al = 'z'; al >= 'a'; al--)
{
	putchar(al);
}
putchar('\n');
return (0);
}
