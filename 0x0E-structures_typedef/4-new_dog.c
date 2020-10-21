  
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Function that copy the string given as a parameter
 * @str: String to copy
 * Return: Pointer to a newly allocate space in memory
 */
char *_strdup(char *str)
{
	char *array;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{}

	array = malloc(sizeof(char) * i + 1);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		array[i] = str[i];
	}

	array[i] = '\0';
	return (array);
}


/**
 * new_dog - Function that creates a new dog
 *@name: Struct parameter
 *@age: Struct parameter
 *@owner: Struct parameter
 * Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = NULL;

	if (!name || !owner)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));

	if (dog)
	{
		dog->name = _strdup(name);
		dog->owner = _strdup(owner);
		if (!dog->name)
		{
			free(dog);
			return (NULL);
		}
		if (!dog->owner)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}

		dog->age = age;
	}
	else
	{
		free(dog);
	}
	return (dog);
}