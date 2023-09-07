#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory whith a constant bytes
 *
 * @str: pointer to fill with the constant
 * @b: constant
 * @n: max bytes to use
 *
 * Return: a pointer
*/
char *_memset(char *str, char b, unsigned int n)
{
	char *ptr = str;

	while (n--)
		*str++ = b;
	return (ptr);
}

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: number of elements of the array
 * @size: size of type data
 *
 * Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	_memset(array, 0, size * nmemb);
	return (array);
}
