#include "main.h"
/**
 *  *_strstr - Fills memory with a constant byte
 * @haystack: pointer to where the function check
 * @needle: pointer for checking string
 * Return: Pointer to memory
 *  area
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, c;

	i = 0;
	c = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + c] != '\0' && haystack[i + c] != '\0'
		       && needle[j + c] == haystack[i + c])
		{
			if (haystack[i + c] != needle[j + c])
				break;
			c++;
		}
		if (needle[j + c] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}

	return (0);
}
