#include "main.h"
/**
 * _strspn - check presence of a value of a variable
 * @s: place to check the presense
 * @accept: the value we look for
 * Return: pointer to value presence
 */
unsigned int _strspn(char *s, char *accept);
{
	int count = o;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
			}
		}
		s++;
	}
	return (count);
}