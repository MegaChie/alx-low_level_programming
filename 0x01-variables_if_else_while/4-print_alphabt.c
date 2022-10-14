#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z' && alpha != 'e' && alpha != 'q'; alpha++)
	{
	putchar(alpha);
	}
putchar('\n');
return (0);
}
