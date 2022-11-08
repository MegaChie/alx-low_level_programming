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
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	int a, s, d, len;
	char *x;

	len = 0;
	d = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		s = 0;
		while (av[a][s])
		{
			len++;
			s++;
		}
		len++;
		a++;
	}
	x = malloc((sizeof(char) * len) + 1);
	if (x == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		s = 0;
		while (av[a][s])
		{
			x[d] = av[a][s];
			s++;
			d++;
		}
		x[d] = '\n';
		d++;
		a++;
	}
	x[d] = '\0';
	return (x);
}
