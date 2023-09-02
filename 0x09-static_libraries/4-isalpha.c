#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: function checks for alphabetic character
 *
 * @c : checks input of function
 *
 * Return: 1 if 'c' is a letter, lowercase or uppercase 0 otherwise
*/

int _isalpha(int c)
{
	if (c > 64 && c < 123)
		return (1);
	else
		return (0);
}
