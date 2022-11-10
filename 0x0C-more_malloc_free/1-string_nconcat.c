#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - calculate string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int count;

	for (count = 0; string[count] != '\0'; count++)
	{}
	return (count);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num = n, len, i, j;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	if (num < 0)
	{
		return (0);
	}
	if (num >= _strlen(s2))
	{
		num = _strlen(s2);
	}
	len = _strlen(s1) + num + 1;
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == 0)
	{
		return (0);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
