#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog- print struct dog
 *@d: the dog to be intialized
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name !=  NULL)
			printf("Name:(nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age < 0)
			printf("Age:(nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("owner:(nil)\n");
		else
			printf("owner:%s\n", d->owner);
	}
}

