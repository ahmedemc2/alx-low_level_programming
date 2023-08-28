#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: the first string
 * @accept: the second string
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l;

	for (i = 0; s[i] >= '\0'; i++)
		;
	for (j = 0; accept[j] >= '\0'; j++)
		;

	for (k = 0; k < j; k++)
	{
		for (l = 0; l < i; l++)
			if (accept[k] == s[l])
				return (l + 1);
	}
	return (0);
}
