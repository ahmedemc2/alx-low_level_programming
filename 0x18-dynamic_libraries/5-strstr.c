#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack : the string to be scanned
 * @needle : the small string to be searched with-in haystack string
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k = 0;

	while (haystack[i] != '\0')
	{
		k = i;
		for (j = 0; needle[j] >= '\0'; j++)
		{
			if (haystack[i] == needle[j])
				i++;
			else
				break;
		}
		if (needle[j] == '\0')
			return (haystack + k);
		i++;
	}
	return (NULL);
}
