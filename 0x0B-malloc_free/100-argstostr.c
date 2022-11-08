#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr-  concatenates all the arguments of your program.
 * alloc_grid function. integers.
 * @ac: number of arguments
 * @av: arry of arrguments
 */
char *argstostr(int ac, char **av)
{
	int i, c = 0;
	char *x;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	x = malloc(sizeof(char) * (strlen(*av) - 1));
	if (x == NULL)
	{
		return (NULL);
	}
	for(i = 1; i < ac; i++)
	{
		while (c < i)
		{
	    	x = strcpy(x, av[i]);
	    	x = strcat(x, " ");
    	}

	}
	return (x);
}
