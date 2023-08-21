#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s : input of the function
 *
 * return: Always 0
*/

void rev_string(char *s)
{
	int len = 0, i;
	char c;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = 0 ; i < len / 2 ; i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
}
