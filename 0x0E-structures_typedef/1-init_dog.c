#include "holberton.h"
#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct
 * @d: Pointer to  the struct
 * @name: Parameter of a struct
 * @age: Parameter of a struct
 * @owner: Parameter of a struct
 * 
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
