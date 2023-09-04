#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1 : the original string
 * @s2 : the string to compare with
 *
 * Return: (0) if equal (15) if greater (-15) if less
*/

int _strcmp(char *s1, char *s2)
{
	int nb = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			nb = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;

	}

	return (nb);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str : the string to be duplicated
 *
 * Return: a pointer to the suplicated string, NULL if str = 0
 * or insuffisant memory was available
*/

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	for (i = 0; *(str + i) != '\0'; i++)
		;
	ptr = (char *) malloc(i * sizeof(char) + 1);

	if (str == 0 || _strcmp(str, "NULL") == 0)
		return (0);

	for (j = 0; j <= i; j++)
		*(ptr + j) = *(str + j);

	return (ptr);

}
