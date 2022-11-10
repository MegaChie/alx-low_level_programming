#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: number of charecters to concatinates from string two.
 * Return: pointer to new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	int a = strlen(s1), b = strlen(s2), tmp, tmp2, comp = n;

	if (comp <= 0)
	{
		return (0);
	}
	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	if (comp >= b)
	{
		n = b;
	}
	new = malloc(sizeof(char) * (a + comp + 1));
	if (new == 0)
	{
		return (0);
	}
	for (tmp = 0; s1[tmp] != '\0'; tmp++)
	{
		new[tmp] = s1[tmp];
	}
	for (tmp2 = 0; tmp2 < comp; tmp2++)
	{
		new[tmp + tmp2] = s2[tmp2];
	}
	new[tmp2 + tmp] = '\0';
	return (new);
}
