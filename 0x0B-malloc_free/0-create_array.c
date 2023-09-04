#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size : the size of array to be created
 * @c : the specific char initialized
 *
 * Return: a pointer to the array, NULL if size = 0 or if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * sizeof(char));

	if (size == 0 || ptr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;

	return (ptr);
}
