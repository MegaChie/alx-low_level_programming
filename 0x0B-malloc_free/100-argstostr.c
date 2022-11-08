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
	int i, j;
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
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	return (x);
}
