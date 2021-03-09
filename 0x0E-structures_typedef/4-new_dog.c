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

	while (str[len] != '\0')
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

	nameLength = _strlen(name) + 1;
	shappered->name = malloc(sizeof(char) * nameLength);
	if (shappered->name == NULL)
	{
		free(shappered->name);
		free(shappered);
		return (NULL);
	}

	for (i = 0; i < nameLength; i++)
	{
		shappered->name[i] = name[i];
	}

	shappered->age = age;


	ownerLength = _strlen(owner) + 1;
	shappered->owner =  malloc(sizeof(char) * ownerLength);
	if (shappered->owner == NULL)
	{
		free(shappered->name);
		free(shappered->owner);
		free(shappered);
		return (NULL);
	}

	for (i = 0; i < ownerLength; i++)
	{
		shappered->owner[i] = owner[i];
	}

	return (shappered);
}
