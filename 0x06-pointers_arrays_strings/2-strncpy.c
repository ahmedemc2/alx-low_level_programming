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
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
