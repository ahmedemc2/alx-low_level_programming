#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: the string
 * @c: the character we look for in the string
 *
 * Return: the string from the character found
*/

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; *(s + n) >= '\0'; n++)
	{
		if (*(s + n) == c)
		{
			return (s + n);
		}
	}
	return ('\0');
}
