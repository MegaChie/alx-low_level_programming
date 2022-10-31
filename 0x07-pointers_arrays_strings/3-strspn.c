#include "main.h"
/**
 * _strspn - check presence of a value of a variable
 * @s: place to check the presense
 * @accept: the value we look for
 * Return: pointer to value presence
 */
unsigned int _strspn(char *s, char *accept);
{
	while (*s != '\0')
	{
		unsigned int count = 0;

		while (*s == *accept)
		{
			count++;
			accept++;
		}
		s++;
	}

	return (count);
}
