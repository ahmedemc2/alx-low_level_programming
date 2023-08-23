#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest : the string that within will be copied the secon string
 * @src : the second string
 * @n : how many character will be copied
 *
 * Return: dest Always
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;

	for (j = 0 ; src[j] != '\0' ; j++)
		;
	for (k = 0 ; dest[k] != '\0' ; k++)
		;
	if (n >= j)
		n = j;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	if (n >= j)
		dest[i] = '\0';

	return (dest);
}
