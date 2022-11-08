#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	int a;
	char *x = malloc(sizeof(char) * size);

	for (a = 0; a < size; a++)
	{
		x[a] = char c;
	}
	return (x);
}
