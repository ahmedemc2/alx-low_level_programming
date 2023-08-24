#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s : the string
 *
 * Return: the string capitalized
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '\t')
		{
			s[i] = ' ';
		}

		if (s[i] == ' ' || s[i] == '\n')
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
		}
		if (s[i] == '.' && s[i + 1] != ' ' && s[i + 1] != '\n')
		{
			s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}
