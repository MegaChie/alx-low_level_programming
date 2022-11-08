#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* _strdup - a function that returns a pointer to a newly allocated
*  space in memory, which contains a copy of the string given as a
*  parameter.
* @str: pointer to string
* Return: NULL if it fails or
* Pointer to array.
*/
char *_strdup(char *str)
{
	unsigned int s = strlen(str), d;
	char *x = malloc(sizeof(char) * s - 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (x == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < s; d++)
	{
		x[d] = str[d];
	}
	return (x);
}
