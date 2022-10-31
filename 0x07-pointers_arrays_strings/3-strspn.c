#include "main.h"
/**
 * _strspn - check presence of a value of a variable
 * @s: place to check the presense
 * @accept: the value we look for
 * Return: pointer to value presence
 */
unsigned int _strspn(char *s, char *accept);
{
	int count = o; i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (count);
}
