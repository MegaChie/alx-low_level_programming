#include "main.h"
/**
 *  *_strpbrk - Fills memory with a constant byte
 * @s: pointer to where the function check
 * @accept: pointer for checking string
 * Return: Pointer to memory area
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *place;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				place = &s[i];
				return (place);
			}
			j++;
		}
		i++;
	}
	return (0);
}
