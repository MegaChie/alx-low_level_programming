#include "main.h"
/**
 * _strspn - check presence of a value of a variable
 * @s: place to check the presense
 * @accept: the value we look for
 * Return: pointer to value presence
 */
unsigned int _strspn(char *s, char *accept);
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;

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
			break;
		i++;
	}
	return (count);
}
