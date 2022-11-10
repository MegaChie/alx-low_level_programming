#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *malloc_checked(unsigned int b);
{
	void *num;
	
    num = malloc(b);
	if (num == 0) 
	{
		exit (98);
	}
	return (num);
}
