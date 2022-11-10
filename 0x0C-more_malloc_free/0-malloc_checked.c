#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);
{
	void *num = malloc(b);

	if (num == NULL) 
	{
		exit (98);
	}
	return (num);
}
