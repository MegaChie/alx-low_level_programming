#include "main.h"
/**
 * _strspn - check presence of a value of a variable
 * @s: place to check the presense
 * @accept: the value we look for
 * Return: pointer to value presence
 */
unsigned int _strspn(char *s, char *accept);
{
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str2[j] == str1[i])
			{
				count++;
				break;
			}

			j++;
		}

		if (s[i] != accept[j])
		{
			break;
		}

		i++;
	}

	return (count);
}
