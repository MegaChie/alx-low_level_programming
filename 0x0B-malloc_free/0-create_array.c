#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char.
 * @size: interger for lenght
 * @c: initialization value.
 * return: poiinter to char or NULL if error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *x = malloc(sizeof(char) * size);

	if (size <= 0)
	{
		return (NULL);
	}
	if (x == NULL)
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
