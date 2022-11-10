#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x = strlen(s1), temp = n;
	char *new;

	if (n < 0)
	{
		return (0);
	}
	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	if (n >= strlen(s2));
	{
		tmp = strlen(s2);
	}
	new = malloc(sizeof(char) * (strlen(s2) + x + 1));
	for (temp = 0; temp < x; temp++)
	{
		new[temp] = s1[temp];
	}
	for (temp = x + 1; temp < n; temp++)
	{
		new[temp] = s2[temp];
	}
}
