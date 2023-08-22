#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: the destination of the copy
 * @src: the source of the copy
 *
 * Return: destination value
*/

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; src[i] != '\0' ; i++)
		;
	for (j = 0 ; j <= i ; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
