#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr-  concatenates all the arguments of your program.
 * alloc_grid function. integers.
 * @ac: number of arguments
 * @av: arry of arrguments
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *x;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	x = malloc(sizeof(char) * (strlen(*av) + 1));
	if (x == NULL)
	{
		return (NULL);
	}
	for(i = 1; i < ac; i++)
	{
    	x[i] = av [i];
    	x[i + 1] = '\n';
	}
	return (x);
}
