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
