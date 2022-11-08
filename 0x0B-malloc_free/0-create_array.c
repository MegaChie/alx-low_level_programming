#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *x = malloc(sizeof(char) * size);

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			x[a] = c;
		}
	}
	return (x);
}
