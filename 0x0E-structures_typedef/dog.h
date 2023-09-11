#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog list of information
 *
 * @name: the dog name
 * @age : the dog age
 * @owner: the dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif