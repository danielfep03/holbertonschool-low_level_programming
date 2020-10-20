#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *@d: Pointer
 */


void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!(d->name))
		{
			printf("Name: (nil)\n");
		}
			else
			{
				printf("Name: %s\n", d->name);
			}
		if (!(d->age))
		{
			printf("Age: (nil)\n");
		}
			else
			{
				printf("Age: %f\n", d->age);
			}
		if (!(d->owner))
		{
			printf("Name: (nil)\n");
		}
			else
			{
				printf("Name: %s\n", d->owner);
			}
	}
}
