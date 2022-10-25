#include "main.h"
/**
 * rev_string - swaps the values of two integers
 * @s: pointer to first value
 */
void rev_string(char *s)
{
char b;
	int a, c, d;

	c = 0;
	d = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	d = c - 1;

	for (a = 0; a < c / 2; a++)
	{
		b = s[a];
		s[a] = s[d];
		s[d--] = b;
	}
}
