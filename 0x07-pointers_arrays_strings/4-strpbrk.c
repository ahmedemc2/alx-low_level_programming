#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or 0 if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j, pos;

	for (pos = 0; s[pos] >= '\0'; pos++)
		;
	while (accept[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j < pos)
				pos = j;
			}
		}
		i++;
	}
	return (s + pos);
}
