#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate how many bytes in the string
 *
 * @string: the string to calculate her bytes
 *
 * Return: number of bytes
*/

unsigned int _strlen(char *string)
{
	int num;

	for (num = 0; string[num]; num++)
		;
	return (num);
}

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1 : the first string
 * @s2 : the second string
 * @n: the first bytes of s2
 *
 * Return: a pointer contain the s1 and the first n bytes of s2,
 * Null if the function malloc fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int x, i, j, l;

	if (n >= _strlen(s2))
		n = _strlen(s2) - 1;
	x = _strlen(s1) + n;

	concat = malloc(sizeof(concat) * x);

	if (concat == NULL)
	{
		return (NULL);
	}

		for (i = 0; i < x - n; i++)
		{
			*(concat + i) = *(s1 + i);
		}
		l = 0;
		for (j = i; j <= x; j++)
		{
			*(concat + j) = *(s2 + l);
			l++;
		}
		*(concat + j) = '\0';
		return (concat);

}
