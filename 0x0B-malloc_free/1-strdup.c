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
	char *x;
	unsigned int a, a;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	x = malloc(sizeof(char) * (a + 1));
	if (x == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < a; a++)
	{
		x[a] = str[a];
	}
	x[a] = '\0';
	return (x);
}
