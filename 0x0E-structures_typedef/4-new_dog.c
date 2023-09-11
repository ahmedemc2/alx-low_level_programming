#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that calculate the string of a string
 *
 * @str : the string
 *
 * Return: the lenght of the string
*/

int _strlen(char *str)
{
	int nb = 0;

	while (*(str + nb))
	{
		nb++;
	}
	return (nb);
}

/**
 * _strcopy - funtion that copy the string from a variable to another
 *
 * @origin: the string to be copied
 * @copy: the variable to copy into the string
 *
 * Return: the copy string
*/

char *_strcopy(char *copy, char *origin)
{
	int i = 0;

	while (*(origin + i))
	{
		copy[i] = origin[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/**
 * new_dog - function that creates a new dog
 *
 * @name : the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner name of the new dog
 *
 * Return: a pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *malinwa;

	if (!name || age < 0 || !owner)
		return (NULL);
	malinwa = (dog_t *) malloc(sizeof(dog_t));
	if (malinwa == NULL)
		return (NULL);

	malinwa->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*malinwa).name == NULL)
	{
		free(malinwa);
		return (NULL);
	}
	malinwa->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*malinwa).owner == NULL)
	{
		free(malinwa->name);
		free(malinwa);
		return (NULL);
	}
	malinwa->name = _strcopy(malinwa->name, name);
	malinwa->age = age;
	malinwa->owner = _strcopy(malinwa->owner, owner);
	return (malinwa);
}
