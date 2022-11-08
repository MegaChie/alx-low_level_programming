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
char char *_strdup(char *str)
{
	unsigned int a, s = strlen(str);
	char *x = malloc(sizeof(char) * s);

	if (str <= 0)
	{
		return (NULL);
	}
	if (x == NULL)
	{
		return (NULL);
	}
	x = str;

	
	return (x);
}
