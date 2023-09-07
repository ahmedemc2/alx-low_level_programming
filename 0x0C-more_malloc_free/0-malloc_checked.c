#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: the number of memory to allocate
 *
 * Return: a pointer to the allocated memory,
 * 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
