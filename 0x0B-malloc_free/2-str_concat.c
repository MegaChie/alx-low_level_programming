#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* str_concat - a function that concatenates two strings.
* @s1: pointer to string one
* @s2: pointer to string two
* Return: NULL if it fails or
* Pointer to array.
*/
char *str_concat(char *s1, char *s2)
{
	char *x;

	x = malloc(strlen(s1) + strlen(s2) + 1);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (x == NULL)
	{
		return (NULL);
	}
	strcpy(x, s1);
	strcat(x, s2);
	return (x);
}
