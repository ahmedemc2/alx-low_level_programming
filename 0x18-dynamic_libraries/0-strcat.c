#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest : the string where to add the second dtring
 * @src : the second string that will be addede to the first string
 *
 * Return: dest Always
*/

char *_strcat(char *dest, char *src)
{
	int i, j, n, k;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (j = 0 ; src[j] != '\0'; j++)
		;
	n = i + j;
	j = 0;
	dest[i - 1] = ' ';

	for (k = i ; k < n ; k++)
	{
		dest[k] = src[j];
		j++;
	}
	return (dest);
}
