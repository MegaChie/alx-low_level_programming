#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer or 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *old;
	unsigned int i;

	if (new_size == old_size)
		{
			return (ptr);
		}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (0);
	}

	if (!ptr)
		{
			return (malloc(new_size));
		}

	new = malloc(new_size);
	if (!new)
		{
			return (0);
		}

	old = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
	}

	free(ptr);
	return (new);
}
