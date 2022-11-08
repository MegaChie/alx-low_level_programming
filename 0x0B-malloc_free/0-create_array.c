#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars and initializes it with
  *a specific char.
  *@size: size of array.
  *@c: char to initialize array with.
  *Return: NULL if it fails or
  *Pointer to array.
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
