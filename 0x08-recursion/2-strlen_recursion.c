#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s : string to count her lenght
 *
 * Return: the lenght of the string
*/

int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
