#include "main.h"
/**
 *  *_strstr - Fills memory with a constant byte
 * @s: pointer to where the function check
 * @accept: pointer for checking string
 * Return: Pointer to memory area
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, s, d = 0;

	while (haystack[a] != '\0')
	{
		s = 0;
		while (haystack[a + d] != '\0' && needle[s + d] != '\0' && haystack[a + d] == needle[s + d])
		{
			if (haystack[a + d] != needle[s + d])
			{
				break;
			}
			d++;
		}
		if (needle[s + d] == '\0')
		{
			return (&haystack[a]);
		}
		s++;
		a++;
	}
	return (0);
}
