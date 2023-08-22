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
	int len, i;
	char c;

	for (len = 0 ; s[len] != '\0' ; len++)
		;

	for (i = 0 ; i < len / 2 ; i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
}
