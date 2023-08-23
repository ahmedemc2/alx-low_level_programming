#include "main.h"

/**
 * _strncat - function that concatenates two strings using at most n bytes
 * from the second string
 *
 * @dest : the string that we will add the second string
 * @src : the string that well be added
 * @n : number of bytes
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k, dim;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;

	dim = i + n - 1;
	j = 0;

	for (k = i ; k <= dim ; k++)
	{
		dest[k] = src[j];
		j++;
	}
	return (dest);
}
