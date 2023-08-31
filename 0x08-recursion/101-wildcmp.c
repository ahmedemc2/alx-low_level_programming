#include "main.h"

int wildcmp(char *s1, char *s2);

/**
 * its_star - pass if found aa star in the string
 *
 * @s2 : the second string that can contain asterisk
 *
 * Return: the pointer past the asterisk
*/

char *its_star(char *s2)
{
	if (*s2 == '*')
		return (its_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - turn magic to reality
 *
 * @s1 : the first string
 * @s2 : the second string that can contain stars
 *
 * Return: 1 if identical, 0 if false
*/

int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inception(s1 + 1, s2);
	return (ret);
}

/**
 * wildcmp - compare two string if identical
 *
 * @s1 : the first string
 * @s2 : the second string that can contain asterisk
 *
 * Return: 1 is identical, 0 if not
*/

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*its_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = its_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);
}
