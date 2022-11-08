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
	unsigned int a = 1;

	for (; a < 3; a++)
	{
		if (sa == NULL)
		{
			sa = "";
		}
	}
	else
	{
		x = malloc(strlen(s1) + strlen(s2) + 1);
	    strcpy(x, s1);
	    strcat(x, s2);
	}
	return (x);
}
