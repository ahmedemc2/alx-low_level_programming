#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s : the input of the function as a string
 *
 * Return: the lenght of the string
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
