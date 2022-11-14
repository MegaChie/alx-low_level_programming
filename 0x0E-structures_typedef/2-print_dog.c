#include <stdio.h>
#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	if (d->name == 0)
	{
		printf("Name: (nil)\n");
	}
	printf("Age: %f",d->age);
	if (d->owner == 0)
	{
		printf("Owner: (nil)\n");
	}
	printf("Owner: %s\n",d->owner );
}
