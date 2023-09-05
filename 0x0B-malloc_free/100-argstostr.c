#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: counter of arguments
 * @av: vector of arguments
 *
 * Return: a pointer to a new string of arguments
 * NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	int i, j = 0, c = 0, x = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
			j++;
		c += j;
		j = 0;
	}
	c += ac;

	ptr = (char *) malloc(c * sizeof(char) + 1);

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			ptr[x] = av[i][j];
			j++;
			x++;
		}
		ptr[x] = '\n';
		x++;
		j = 0;
	}
	ptr[x] = '\0';
	return (ptr);
}
