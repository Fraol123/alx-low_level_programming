#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a type describing a dog
 *@name: the dogs name
 *@age: age of the dog
 *@owner: The owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_w - Typdef for structure dog
 */

typedef struct dog dog_w;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_w *new_dog(char *name, float age, char owner);

#endif
