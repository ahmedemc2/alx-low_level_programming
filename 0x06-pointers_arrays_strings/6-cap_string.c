#include "main.h"

/**
 * isLower - look if the alphabet is lowercase
 *
 * @c : the alphabet
 *
 * Return: number of the character in ascii code
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * toAvoid - function that look for the separators word to avoid
 *
 * @c : the char to check if is a separator
 *
 * Return: (1) if there is a separator and (0) if not
*/

int toAvoid (char c)
{
	int i;
	char avoid[] = " \n,.;!?(){\"}";

	for (i = 0 ; i < 13 ; i++)
		if (c == avoid[i])
			return (1);
	return (0);
}

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s : the string
 *
 * Return: the string capitalized
*/

char *cap_string(char *s)
{
	int found = 1;
	char *p = s;

	while (*s)
	{
		if (*s == '\t')
			*s = ' ';

		if (toAvoid(*s))
			found = 1;

		else if (isLower(*s) && found)
		{
			*s -= 32;
			found = 0;
		}
		else
			found = 0;
		s++;
	}
	return (p);
}

