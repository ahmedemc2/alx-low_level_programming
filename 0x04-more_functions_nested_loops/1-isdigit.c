#include "main.h"

/**
 * _isdigit - entry point
 *
 * Description: function that checks for a digit (0 through 9)
 *
 * @c : checks the input of the function
 *
 * Return: 1 if 'c' is a digit
 * 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
