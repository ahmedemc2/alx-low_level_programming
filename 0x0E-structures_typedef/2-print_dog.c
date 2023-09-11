#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 *
 * @d: a pointer to the dog information
 *
 * Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s", d->name ? d->name : "(nil)");
		printf("Age: %f", d->age);
		printf("Owner: %s", d->owner ? d->owner : "(nil)");
	}
}
