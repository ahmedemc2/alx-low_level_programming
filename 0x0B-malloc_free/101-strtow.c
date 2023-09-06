#include <stdlib.h>
#include "main.h"

/**
 * counter - count the number of character in a string
 *
 * @str: the dtring
 *
 * Return: the number of character
*/

int counter(char *str)
{
	int i, nb = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				nb++;

		}
		else if (i == 0)
			nb++;
	}
	nb++;
	return (nb);
}

/**
 * strtow - function that splits a string into words
 *
 * @str : the string to split into words
 *
 * Return: a pointer to an array of words,
 * Null if str == NULL or "" or function fails
*/

char **strtow(char *str)
{
	char **ptr;
	int n = 0, i = 0, wc = 0, l = 0, j = 0, k = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = counter(str);
	if (n == 1)
		return (NULL);
	ptr = (char **)malloc(n * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[n - 1] = NULL;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			ptr[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (ptr[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(ptr[k]);
				free(ptr[n - 1]);
				free(ptr);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				ptr[wc][l] = str[i + l];
			ptr[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (ptr);
}
