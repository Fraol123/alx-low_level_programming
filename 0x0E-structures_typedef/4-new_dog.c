#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
int _strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 *_strlen-finds length of string
 *@str: the string to be mmeasured
 *Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 *new_dog- creats a new dog
 *@name: the name of the dog
 *@age:age of the dog
 *@owner: owner of the dog
 *Return: Shappered
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *shappered;
	int nameLength, ownerLength, i;

	nameLength = _strlen(name);
	ownerLength = _strlen(owner);

		if (name == NULL || age < 0 || owner == NULL)
			return (NULL);

	shappered = malloc(sizeof(dog_t));
	if (shappered == NULL)
		return (NULL);

	shappered->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (shappered->name == NULL)
	{
		free(shappered);
		return (NULL);
	}
	shappered->owner =  malloc(sizeof(char) * (_strlen(owner) + 1));
	if (shappered->owner == NULL)
	{
		free(shappered->name);
		free(shappered);
		return (NULL);
	}
	for (i = 0; i < nameLength; i++)
	{
		shappered->name[i] = name[i];
	}
	for (i = 0; i < ownerLength; i++)
	{
		shappered->owner[i] = owner[i];
	}
	shappered->age = age;


	return (shappered);
}
