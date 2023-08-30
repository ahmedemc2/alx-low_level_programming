#include "main.h"

int is_palindrome(char *s);
int ChecksPalindrome(char *s, int start, int end, int modu);

/**
 * indexLast - function to get the lenght or the last index of string
 *
 * @s : the string
 *
 * Return: the index of the last character
*/

int indexLast(char *s)
{
	int i = 0;

	if (*s > '\0')
		i += indexLast(s + 1) + 1;
	return (i);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not
 *
 * @s : the string
 *
 * Return: 1 if the string is a palindrome 0 if its not
*/

int is_palindrome(char *s)
{
	int end = indexLast(s);

	return (ChecksPalindrome(s, 0, end - 1, end % 2));
}

/**
 * ChecksPalindrome - function check if the string is palindrome or not
 *
 * @s : the string to check
 * @start : the index that start from the left
 * @end : the index that start from right
 * @modu : checker
 *
 * Return: 0 if palindrome 1 if not
*/

int ChecksPalindrome(char *s, int start, int end, int modu)

{
	if ((start == end && modu != 0) || (start == end + 1 && modu == 0))
		return (1);

	else if (s[start] != s[end])
		return (0);

	else
		return (ChecksPalindrome(s, start + 1, end - 1, modu));
}

