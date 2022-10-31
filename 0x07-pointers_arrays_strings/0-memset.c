#include "main.h"
/**
 * *_memset _ replace n bytes forom memory with b
 * @s: pointer to char
 * @b: rewrite value
 * @n: number of rewrites
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}
