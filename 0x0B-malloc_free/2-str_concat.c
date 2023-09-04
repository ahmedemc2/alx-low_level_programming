#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 *
 * @s1 : the first string
 * @s2 : the second string to add
 *
 * Return: a pointer ponted to the memory which contain the two strings
 * NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	ptr = (char *) malloc(i + j + 1);

	for (n = 0; n <= i; n++)
		*(ptr + n) = *(s1 + n);
	for (n = i; n <= i + j; n++)
		*(ptr + n) = *(s2 + n - i);
	return (ptr);

}
