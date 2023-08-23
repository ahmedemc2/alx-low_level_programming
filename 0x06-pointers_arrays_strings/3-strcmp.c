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
	int i = 0, nb, tmp = 1;

	do {
		if (s1[i] == s2[i])
		{
			nb = 0;
			i++;
		}
		else if (s1[i] < s2[i])
		{
			nb = -15;
			tmp = 0;
		}
		else if (s1[i] > s2[i])
		{
			nb = 15;
			tmp = 0;
		}

	} while (s1[i] != '\0' && s2[i] != '\0' && tmp == 1);

	return (nb);
}
