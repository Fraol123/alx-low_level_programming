#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a type describing a dog
 *@name: the dogs name
 *@age: age of the dog
 *@owner: The owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_w;



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_w *new_dog(char *name, float age, char *owner);

#endif
