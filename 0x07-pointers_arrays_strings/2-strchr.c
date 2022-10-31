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
	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
		}
		else 
		{
			p = 0;
		}
		i++;
	}
	return (p);
}
