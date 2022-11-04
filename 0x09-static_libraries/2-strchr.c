#include "main.h"
/**
 * *_strchr - check presence of a value of a variable
 * @s: place to check the presense
 * @c: the value we look for
 * Return: pointer to value presence
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
