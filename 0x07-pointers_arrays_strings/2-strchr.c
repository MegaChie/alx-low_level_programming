#include "main.h"
/**
 * _memcpy - chabge value of a variable
 * @dest: variable to be changes
 * @src: rewite value of change
 * @n: number of elements to change
 * Return: pointer to `dest`
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		s++;
	}

	return (s + 1);
}
