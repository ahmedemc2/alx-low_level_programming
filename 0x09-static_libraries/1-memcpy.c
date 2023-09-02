#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: the memory where we paste the other memory
 * @src: the memory to copie
 * @n: the number of bytes to copy
 *
 * Return: pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
