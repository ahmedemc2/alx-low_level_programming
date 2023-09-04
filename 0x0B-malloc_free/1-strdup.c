#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	if (str == 0 || str == "NULL")
		return (0);

	for (j = 0; j <= i; j++)
		*(ptr + j) = *(str + j);
	return (ptr);

}
